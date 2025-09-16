/**
 * myfile2.cpp
 * Launches a menu with 3 choices:
 * 1. calculate surface area of a disk
 * 2. calculate volume of a cylinder
 * 3. exit program
 * 
 * Menu repeats until option 3 is chosen, upon which the program will print out the number of times options 1 and 2 have been run and then stop
 */
#include "myfile2.h"

/**
 * Main function
 */
int main() {
    char choice;
    int nvolume = 0;  // number of times the volume function has been executed
    int nsurface = 0; // number of times the surface function has been executed
    double radius, height;
    while (1)
    {
        choice = menu();
        switch (choice)
        {
        case '1':
            cout << endl << "Surface calculation" << endl;
            cout << " Enter the radius: ";
            cin >> radius;
            nsurface = surface(radius);
            break;
        case '2':
            cout << endl << "Volume calculation" << endl;
            cout << " Enter the radius: ";
            cin >> radius;
            cout << " Enter the height: ";
            cin >> height;
            nvolume = volume(radius, height);
            break;
        case '3':
            cout << endl << "Exit the program" << endl;
            cout << "The volume function has been executed " << nvolume << " times" << endl;
            cout << "The surface function has been executed " << nsurface << " times" << endl;
            exit(0);
        default:
            break;
        }
    }
}

/**
 * menu function: displays an option menu and returns the chosen option
 */
char menu(void) {
    char choice;
    cout << "What do you want to do?:" << endl
         << endl;
    cout << "\t-Calculate the area of a disk from a radius (Press 1)" << endl
         << endl;
    cout << "\t-Calculate the volume of a cylinder from a radius and a height (Press 2) " << endl << endl;
        cout
         << "\t-Exit the program (press 3)" << endl
         << endl;
    cout << "Your choice: ";
    cin >> choice;
    return (choice);
    cout << endl;
}

/**
 * surface function: calculates the surface area of a disk given 'radius'
 * returns the total number this function has been run
 */
int surface(double radius) {
    static int count = 0;

    double area = Pi * pow(radius, 2);
    cout << "The surface is: " << area << endl << endl;

    return ++count;
}

/**
 * volume function: calculates the volume of a cylinder given 'radius' and 'height'
 * returns the total number this function has been run
 */
int volume(double radius, double height) {
    static int count = 0;

    double volume = Pi * pow(radius, 2) * height;
    cout << "The volume is: " << volume << endl << endl;
    
    return ++count;
}
