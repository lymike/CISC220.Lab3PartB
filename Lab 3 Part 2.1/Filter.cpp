/*
 * Filter.cpp
 *
 *  Created on: Oct 4, 2017
 *      Author: Michael Ly
 */

#include <iostream>
#include <stdlib.h>

#include "Filter.hpp"
using namespace std;

Filter::Filter() {
	arr = NULL;
	size = 0;
	farray = NULL;
	hi = 0;
	lo = 0;
}

void Filter::createArray1() {
	size = (rand() % 25) + 25;
	int *tarr = new int[size];
	hi = (rand() % 5) + 5;
	lo = -1*((rand() % 5) + 5);
	for(int i=0;i<size;i++){
		tarr[i] = (rand() % (hi-lo)) + lo;
	}
	arr = tarr;
}

void Filter::arrHelper(int arr[], int len, int h, int l) {
	arr[len-1] = (rand() % (h-l)) + l;
	if(len > 1){
		arrHelper(arr,len-1,h,l);
	}
}

void Filter::createArray2() {
	size = (rand() % 25) + 25;
	int *tarr = new int[size];
	hi = (rand() % 5) + 5;
	lo = -1*((rand() % 5) + 5);
	arrHelper(tarr, size, hi, lo);
	arr = tarr;
}

void Filter::printArray() {
	cout << "{";
	for (int i=0; i<size; i++) {
		if (i < size-1) {
			cout << arr[i] << ", ";
		}
		else {
			cout << arr[i];
		}
	}
	cout << "}" << endl;
}

void Filter::printFarray() {
	cout << "{";
	for (int i=0; i<size; i++) {
		if (i < size-1) {
			cout << farray[i] << ", ";
		}
		else {
			cout << farray[i];
		}
	}
	cout << "}" << endl;
}

int Filter::hanningWin(int arr[]) {
	int result = 0;
		for (int i=0; i<5; i++) {
			if (i==0 || i==4) {
				result += arr[i]*1;
			}
			else if (i==1 || i==3) {
				result += arr[i]*2;
			}
			else {
				result += arr[i]*3;
			}
		}
		result /= 9;
		return result;
}

void Filter::filterArray() {
	int* newarr = arr;
		if (size<5) {
			for (int i=0; i<size; i++) {
				newarr[i] = 0;
			}
		}
		else {
			for (int i=0; i<size; i++) {
				if (i<2 || i>size-3) {
					newarr[i] = 0;
				}
				else {
					newarr[i] = hanningWin(&newarr[i-2]);
				}
			}
		}
		farray = newarr;
}

void Filter::graphArray() {
	for (int i=hi; i>=lo; i--) {
			if (i>=0) {
				cout << " " << i << ":";
			}
			else {
				cout << i << ":";
			}
			for (int j=0; j<size; j++) {
				if (arr[j]==i) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
}

void Filter::graphFarray() {
	for (int i=hi; i>=lo; i--) {
			if (i>=0) {
				cout << " " << i << ":";
			}
			else {
				cout << i << ":";
			}
			for (int j=0; j<size; j++) {
				if (farray[j]==i) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
}

int Filter::getSize() {
	return size;
}

int Filter::getHi() {
	return hi;
}

int Filter::getLo() {
	return lo;
}

int* Filter::getArray() {
	return arr;
}

int* Filter::getFarray() {
	return farray;
}


