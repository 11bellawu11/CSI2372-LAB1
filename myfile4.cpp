#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

bool determineAngstrom(int number) {
	int sum = 0;
    int original = number;
    std::string digitCount = std::to_string(original);
    
	while (number > 10) { // if more than 2 digits
		int digit = number %10;
		sum = sum + pow(digit, digitCount.length());
		number /= 10;
	}
	if (number < 10) {
		sum = sum + pow(number, digitCount.length());
	}

    /*std::cout << original; //testing lines
    std::cout << "\n";
    std::cout << sum;
    std::cout << "\n";
    */
	return (int)sum == (int)original;
}

/* Determine if inputted number is an Angstrom number
**
*/

 int main() {
	int userNumber;
	bool angstrom;
	std::cout << "Please enter your number: ";

	std::cin >> userNumber;
	angstrom = determineAngstrom(userNumber);

	if (angstrom == true) {
		std::cout << userNumber << " is an Angstrom number ";
	}
	else {
		std::cout << userNumber << " is not an Angstrom number ";
	}
}

