/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

double area(double radius) {
    return M_PI * radius * radius;
}

double area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    cout << "Choose a shape to find the area:\n";
    cout << "1. Circle\n";
    cout << "2. Triangle\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "The area of the circle is: " << area(radius) << endl;
    } else if (choice == 2) {
        double base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        cout << "The area of the triangle is: " << area(base, height) << endl;
    } else {
        cout << "Invalid choice. Please run the program again and select either 1 or 2." << endl;
    }

    return 0;
}