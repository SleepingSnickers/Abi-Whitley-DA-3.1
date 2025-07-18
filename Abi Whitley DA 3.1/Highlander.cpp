#include "Highlander.h"

#include <iostream>
#include <string>

using namespace std;

int Highlander::count = 0;

Highlander::Highlander() {
	name = "Orielle";
	count++;
}

Highlander::Highlander(string nam) {
	name = nam;
	count++;
}

Highlander::~Highlander() {
	count--;
}

string Highlander::speak() {
	if (count == 1) {
		return "There can be only one. Now there is " + to_string(count);
	}
	else {
		return "There can be only one. But now there are " + to_string(count);
	}
	
}

string Highlander::status() {
	if (count == 1) {
		return "Immortal";
	}
	else {
		return "Murderous";
	}
}