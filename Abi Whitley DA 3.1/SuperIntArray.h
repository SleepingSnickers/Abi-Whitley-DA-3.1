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

	int getNums(int) const;
	int getSize() const;
	void setNums(int*, int);

	void add(int);
	int get(int) const;
	void change(int, int);

	//adding new getter functions to call the values without adding arguments
	double getMax() const;
	double getMin() const;
	double getMean() const;

	static double getMax(int[], int);
	static double getMin(int[], int);
	static double getMean(int[], int);
};


#endif
