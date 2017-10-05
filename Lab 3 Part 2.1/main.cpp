/*
 * main.cpp
 *
 *  Created on: Oct 4, 2017
 *      Author: Michael Ly
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Filter.hpp"
using namespace std;

int main() {
	srand(time(NULL));

	cout << "TEST 1: " << endl; // Expecting all the functions declared and createArray1() are working properly.
	cout << "Filter 1:" << endl;
	Filter f1;
	f1.createArray1();
	cout << "Size: " << f1.getSize() << endl; // Expected the size of f1 to be printed out.
	cout << "Hi: " << f1.getHi() << endl; // Expected the high value of f1 to be printed out.
	cout << "Lo: " << f1.getLo() << endl; // Expected the low value of f1 to be printed out.
	cout << "Array:" << endl;
	f1.printArray(); // Expected the whole array to be printed out.
	f1.graphArray(); // Expected the star graph of the array to be printed out.
	cout << "Filtered Array:" << endl;
	f1.filterArray();
	f1.printFarray(); // Expected a filtered array to be printed out.
	f1.graphFarray(); // Expected the star graph of the filtered array to be printed out.
	cout << "**************************************************" << endl;

	cout << "TEST 2: " << endl;
	cout << "Filter 2:" << endl;
	Filter f2;
	f2.createArray1();
	cout << "Size: " << f2.getSize() << endl; // Expected the size of f2 to be printed out.
	cout << "Hi: " << f2.getHi() << endl; // Expected the high value of f2 to be printed out.
	cout << "Lo: " << f2.getLo() << endl; // Expected the low value of f2 to be printed out.
	cout << "Array:" << endl;
	f2.printArray(); // Expected the whole array to be printed out.
	f2.graphArray(); // Expected the star graph of the array to be printed out.
	cout << "Filtered Array:" << endl;
	f2.filterArray();
	f2.printFarray(); // Expected a filtered array to be printed out.
	f2.graphFarray(); // Expected the star graph of the filtered array to be printed out.
	cout << "**************************************************" << endl;

	cout << "TEST 3: " << endl;
	cout << "Filter 3:" << endl;
	Filter f3;
	f3.createArray1();
	cout << "Size: " << f3.getSize() << endl; // Expected the size of f3 to be printed out.
	cout << "Hi: " << f3.getHi() << endl; // Expected the high value of f3 to be printed out.
	cout << "Lo: " << f3.getLo() << endl; // Expected the low value of f3 to be printed out.
	cout << "Array:" << endl;
	f3.printArray(); // Expected the whole array to be printed out.
	f3.graphArray(); // Expected the star graph of the array to be printed out.
	cout << "Filtered Array:" << endl;
	f3.filterArray();
	f3.printFarray(); // Expected a filtered array to be printed out.
	f3.graphFarray(); // Expected the star graph of the filtered array to be printed out.
	cout << "**************************************************" << endl;

	cout << "TEST 4: " << endl; // Expected all the functions declared and createArray2() are working properly.
	cout << "Filter 4:" << endl;
	Filter f4;
	f4.createArray2();
	cout << "Size: " << f4.getSize() << endl; // Expected the size of f4 to be printed out.
	cout << "Hi: " << f4.getHi() << endl; // Expected the high value of f4 to be printed out.
	cout << "Lo: " << f4.getLo() << endl; // Expected the low value of f4 to be printed out.
	cout << "Array:" << endl;
	f4.printArray(); // Expected the whole array to be printed out.
	f4.graphArray(); // Expected the star graph of the array to be printed out.
	cout << "Filtered Array:" << endl;
	f4.filterArray();
	f4.printFarray(); // Expected a filtered array to be printed out.
	f4.graphFarray(); // Expected the star graph of the filtered array to be printed out.
	cout << "**************************************************" << endl;

	cout << "TEST 5: " << endl;
	cout << "Filter 5:" << endl;
	Filter f5;
	f5.createArray2();
	cout << "Size: " << f5.getSize() << endl; // Expected the size of f5 to be printed out.
	cout << "Hi: " << f5.getHi() << endl; // Expected the high value of f5 to be printed out.
	cout << "Lo: " << f5.getLo() << endl; // Expected the low value of f5 to be printed out.
	cout << "Array:" << endl;
	f5.printArray(); // Expected the whole array to be printed out.
	f5.graphArray(); // Expected the star graph of the array to be printed out.
	cout << "Filtered Array:" << endl;
	f5.filterArray();
	f5.printFarray(); // Expected a filtered array to be printed out.
	f5.graphFarray(); // Expected the star graph of the filtered array to be printed out.
	cout << "**************************************************" << endl;

	cout << "TEST 6: " << endl;
	cout << "Filter 6:" << endl;
	Filter f6;
	f6.createArray2();
	cout << "Size: " << f6.getSize() << endl; // Expected the size of f6 to be printed out.
	cout << "Hi: " << f6.getHi() << endl; // Expected the high value of f6 to be printed out.
	cout << "Lo: " << f6.getLo() << endl; // Expected the low value of f6 to be printed out.
	cout << "Array:" << endl;
	f6.printArray(); // Expected the whole array to be printed out.
	f6.graphArray(); // Expected the star graph of the array to be printed out.
	cout << "Filtered Array:" << endl;
	f6.filterArray();
	f6.printFarray(); // Expected a filtered array to be printed out.
	f6.graphFarray(); // Expected the star graph of the filtered array to be printed out.
	cout << "**************************************************" << endl;

	return 0;
}
