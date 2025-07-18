#include "Highlander.h"
#include "SuperIntArray.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	/*Highlander yourHighlander;
	Highlander myHighlander("Abi");

	cout << Highlander::speak() << endl;
	cout << yourHighlander.status() << endl;*/

	int array[] = { 1, 2, 3 };
	SuperIntArray myArray(array, 3);

	//never added the vector<int> section
	vector<int> vec = { 10, 20, 30 };
	SuperIntArray array2(vec);

	myArray.add(4);
	myArray.change(1, 5);

	//for (int i = 0; i < myArray.getSize(); i++) {
	//	cout << myArray.get(i) << endl;
	//}

	cout << "Max: " << myArray.getMax() << endl;
	cout << "Min: " << myArray.getMin() << endl;
	cout << "Mean: " << myArray.getMean() << endl;

	SuperIntArray yourArray = myArray;
	yourArray.add(7);


	//used in-class example
	for (int i = 0; i < myArray.getSize(); i++) {
		cout << myArray.get(i) << endl;
	}
	
	cout << endl;

	for (int i = 0; i < yourArray.getSize(); i++) {
		cout << yourArray.get(i) << endl;
	}

	//my original copy, commented out bc I'm not sure it's correct
	//for (int i = 0; i < myArray.getSize(); i++) {
	//	cout << yourArray.get(i) << endl;
	//}

	return 0;
}