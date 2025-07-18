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

	myArray.add(4);
	myArray.change(1);

	for (int i = 0; i < myArray.getSize(); i++) {
		cout << myArray.get(i) << endl;
	}

	cout << "Max: " << SuperIntArray::getMax(myArray.getNums(), myArray.getSize()) << endl;
	cout << "Min: " << SuperIntArray::getMin(myArray.getNums(), myArray.getSize()) << endl;
	cout << "Mean: " << SuperIntArray::getMean(myArray.getNums(), myArray.getSize()) << endl;

	SuperIntArray yourArray = myArray;
	yourArray.add(7);

	for (int i = 0; i < myArray.getSize(); i++) {
		cout << yourArray.get(i) << endl;
	}

	return 0;
}