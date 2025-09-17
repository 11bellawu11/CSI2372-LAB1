/**
 * myfile1.cpp
 * Prints the size of datatypes & asks for an integer, real number, and character to print them as different forms
 */
#include "myfile1.h"

/**
 * Main function
 */
int main(void) {
	//Return number of bytes for each datatype
	cout << "Size in bytes of a character: " << sizeof(char) << endl;
	cout << "Size in bytes of an integer: " << sizeof(int) << endl;
	cout << "Size in bytes of a float: " << sizeof(float) << endl;
	cout << "Size in bytes of a double: " << sizeof(double) << endl;
	cout << "Size in bytes of a short integer: " << sizeof(short int) << endl;
	cout << "Size in bytes of an unsigned integer: " << sizeof(unsigned int) << endl;

	
	//Ask for integer + display as decimal, octal, and hexadecimal using 2 ways
	int n;
	cout << endl << "Enter an integer: ";
	cin >> n;
	//first method:
	cout << "Number in decimal: " << n << endl;
	cout << "Number in octal: " << oct << n << endl;
	cout << "Number in hexadecimal: " << hex << n << endl;
	//second method: 
	cout << endl << "Number in decimal: " << n << endl;
	cout << "Number in octal: " << setbase(8) << n << endl;
	cout << "Number in hexadecimal: " << setbase(16) << n << endl;


	//Ask for real number + display as scientific notation w/3 sf
	double r;
	cout << endl << "Enter a real number: ";
	cin >> r;
	cout << r << endl;
	cout << scientific << setprecision(2) << r << endl;


	//Ask for a character + display int value
	char c;
	cout << endl << "Enter a character: ";
	cin >> c;
	cout << c << endl;
	cout << (int) c << endl;
 
	return 0;
}