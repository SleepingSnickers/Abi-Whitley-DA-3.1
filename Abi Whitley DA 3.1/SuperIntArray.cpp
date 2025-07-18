#include "SuperIntArray.h"

#include <iostream>
#include <string>

using namespace std;

SuperIntArray::SuperIntArray() : nums(nullptr) {
	numberOfNums = 0;
}

SuperIntArray::SuperIntArray(int nums[], int size) {
	numberOfNums = size;
	
	this->nums = new int[size];

	for (int i = 0; i < size; i++) {
		this->nums[i] = nums[i];
	}
}

SuperIntArray::SuperIntArray(int num) {
	numberOfNums = 0;
	this->nums = nums;
}

SuperIntArray::SuperIntArray(vector<int> nums) {
	numberOfNums = nums.size();
	this->nums = new int[numberOfNums];

	for (int i = 0; i < numberOfNums; i++) {
		this->nums[i] = nums[i];
	}
}

SuperIntArray::SuperIntArray(const SuperIntArray& other) {
	numberOfNums = other.numberOfNums;
	nums = new int[numberOfNums];

	for (int i = 0; i < numberOfNums; i++) {
		nums[i] = other.nums[i];
	}
}

SuperIntArray::~SuperIntArray() {
	delete[] nums;
}

int SuperIntArray::getNums(int num) const {
	//edited my original code to include the if statement!
	if (num >= 0 && num < numberOfNums) {
		return nums[num];
	}
}

int SuperIntArray::getSize() const {
	return numberOfNums;
}

void SuperIntArray::setNums(int *nums, int size) {
	delete[] this->nums;

	numberOfNums = size;

	this->nums = new int[size];
	for (int i = 0; i < size; i++) {
		this->nums[i] = nums[i];
	}
}

void SuperIntArray::add(int nums) {
	int* newArray = new int[numberOfNums + 1];

	for (int i = 0; i < numberOfNums; i++) {
		newArray[i] = this->nums[i];
	}

	newArray[numberOfNums] = nums;
	delete[] this->nums;
	this->nums = newArray;

	numberOfNums++;
}

int SuperIntArray::get(int index) const {
	if (index >= 0 && index < numberOfNums) {
		return nums[index];
	}
}

//fixed this change to add int value. Didn't work on my original code, I just didn't know what to do lol.
void SuperIntArray::change(int index, int value) {
	if (index >= 0 && index < numberOfNums) {
		nums[index] = value;
	}
}

double SuperIntArray::getMax() const {
	return getMax(nums, numberOfNums);
}

double SuperIntArray::getMin() const {
	return getMin(nums, numberOfNums);
}

double SuperIntArray::getMean() const {
	return getMean(nums, numberOfNums);
}

double SuperIntArray::getMax(int nums[], int size) {
	int max = nums[0];

	for (int i = 0; i < size; i++) {
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	return max;
}

double SuperIntArray::getMin(int nums[], int size) {
	int min = nums[0];
	for (int i = 0; i < size; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	return min;
}

double SuperIntArray::getMean(int nums[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += nums[i];
	}
	
	return static_cast<double>(sum) / size;
}