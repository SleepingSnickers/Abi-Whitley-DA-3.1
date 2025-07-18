#ifndef SUPERINTARRAY
#define SUPERINTARRAY

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SuperIntArray
{
private:
	int* nums;
	int numberOfNums;

public:
	SuperIntArray();
	SuperIntArray(int[], int);
	SuperIntArray(int);
	SuperIntArray(vector<int>);
	SuperIntArray(const SuperIntArray&);
	~SuperIntArray();

	int getNums(int);
	int getSize();
	void setNums(int*, int);

	void add(int);
	int get(int);
	void change(int, int);

	static double getMax(int[], int);
	static double getMin(int[], int);
	static double getMean(int[], int);
};


#endif
