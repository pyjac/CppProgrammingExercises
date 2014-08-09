/*

In a right triangle, the square of the length of one side is equal to the sum
of the squares of the lengths of the other two sides. Write a program that
prompts the user to enter the lengths of three sides of a triangle and then
outputs a message indicating whether the triangle is a right triangle.

 */

#include <iostream>

using namespace std;

int main()
{
    double sideOne,sideTwo,sideThree;

    cout << "Enter the length of the first side: ";
    cin >> sideOne;
    cout << "Enter the length of the second side: ";
    cin >> sideTwo;
    cout << "Enter the length of the third side: ";
    cin >> sideThree;

    if (
            (sideOne * sideOne == sideTwo * sideTwo + sideThree  * sideThree) ||
            (sideTwo * sideTwo == sideOne * sideOne + sideThree  * sideThree) ||
            (sideThree * sideThree == sideOne * sideOne + sideTwo  * sideTwo)
        )
        cout << "It's a right angle triangle";
    else
        cout << "Nope, It's not a right angle triangle ";


    return 0;
}

