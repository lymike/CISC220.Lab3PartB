/*
 * Filter.hpp
 *
 *  Created on: Oct 4, 2017
 *      Author: Michael Ly
 */

#ifndef FILTER_HPP_
#define FILTER_HPP_

class Filter {
private:

	int* arr;
	int size;
	int* farray;
	int hi;
	int lo;

	int hanningWin(int arr[]);
	/* Returns the average value of the hanning window being passed in (an array with a size of 5).
	 * Argument: arr[]: array as an input with a size of 5.
	 */

	void arrHelper(int arr[], int len, int h, int l);
	// Helper function for the createArray2 function.

public:

	Filter();
	// Initialize a Filter with NULL values for array and farray, 0 for size, hi, and lo.

	void createArray1();
	/* Returns a dynamic array on the memory heap, released from the memory after function is
	 * being called.
	 */

	void createArray2();
	/* Returns a dynamic array on the memory heap, released from the memory after function is
	 * being called. (Using recursion)
	 */

	void printArray();
	/* Prints out the array.
	 */

	void printFarray();
	// Prints out the farray.

	void filterArray();
	/* Filters an array with hanning window.
	 */

	void graphArray();
	/* Prints out a stars graph of array.
	 */

	void graphFarray();
	// Prints out a stars graph of farray.

	int getSize();
	// Returns the size in the Filter.

	int getHi();
	// Returns the hi value in the Filter.

	int getLo();
	// Returns the lo value in the Filter.

	int* getArray();
	// Returns the array in the Filter.

	int* getFarray();
	// Returns the farray in the Filter.

};




#endif /* FILTER_HPP_ */
