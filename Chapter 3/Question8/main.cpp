/*
 * Write a program that accepts as input the mass, in grams, and density, in
grams per cubic centimeters, and outputs the volume of the object using the
formula: volume = mass / density. Format your output to two decimal places.
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double mass,density,volume;

    cout << setprecision(2) << showpoint << fixed;
    cout << "Enter mass: " ;
    cin >> mass;
    cout << "Enter density: ";
    cin >> density;

    volume = mass / density;

    cout << "Volume is " << volume <<endl;

    return 0;
}

