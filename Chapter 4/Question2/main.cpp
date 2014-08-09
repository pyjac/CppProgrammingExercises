/*
 *
Write a program that prompts the user to input three numbers. The
program should then output the numbers in ascending order.

*/

#include <iostream>

using namespace std;

int main()
{
    int firstNum,secondNum,thirdNum;

    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;
    cout << "Enter third number: ";
    cin >> thirdNum;

    // Don't wanna cheat .. chapter not yet covered
    if(firstNum > secondNum && firstNum > thirdNum
            && secondNum > thirdNum) {
        cout << firstNum << " " << secondNum << " " << thirdNum <<endl;
    }

    if(firstNum > secondNum && firstNum > thirdNum
            && thirdNum > secondNum) {
        cout << firstNum << " " << thirdNum << " " << secondNum  <<endl;
    }

    if(secondNum  > firstNum && secondNum > thirdNum
            && firstNum > thirdNum) {
        cout << secondNum << " " << firstNum << " " << thirdNum  <<endl;
    }

    if(secondNum  > firstNum && secondNum > thirdNum
            && thirdNum  > firstNum) {
        cout << secondNum << " " << thirdNum << " " <<  firstNum  <<endl;
    }
    if(thirdNum  > firstNum && thirdNum > secondNum
            && firstNum > secondNum) {
        cout << thirdNum  << " " << firstNum << " " << secondNum <<endl;
    }

    if(thirdNum  > firstNum && thirdNum > secondNum
            && secondNum > firstNum  ) {
        cout << thirdNum  << " " << secondNum  << " " << firstNum<<endl;
    }

    return 0;
}

