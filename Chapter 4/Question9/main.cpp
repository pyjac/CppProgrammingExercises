/*
Write a program that mimics a calculator. The program should take as input
two integers and the operation to be performed. It should then output the
numbers, the operator, and the result. (For division, if the denominator is
zero, output an appropriate message.) Some sample outputs follow:
3 + 4 = 7
13 * 5 = 65

 */

#include <iostream>

using namespace std;

int main()
{
    int firstNum,secondNum,result;
    int op;

    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;
    cout << "Enter operation \n\t 1 for ADDITI0N \n\t 2 for SUBSTRACTION " <<
            " \n\t 3 MULITIPLICATION \n\t 4 for DIVISION \n\t: ";
    cin >> op;

    switch (op) {
    case 1:
        result = firstNum + secondNum;
        cout << firstNum << " + " << secondNum << " = " << result;
        break;
    case 2:
        result = firstNum - secondNum;
        cout << firstNum << " - " << secondNum << " = " << result;

        break;
    case 3:

        result = firstNum * secondNum;
        cout << firstNum << " * " << secondNum << " = " << result;

        break;
    case 4:
        if(secondNum > 0){
        result = firstNum / secondNum;
        cout << firstNum << " / " << secondNum << " = " << result;
        }else
            cout << "Denominator can't be zero"<<endl;
        break;
    default:
        cout << "Invalid Operation given" <<endl;
        break;
    }

    return 0;
}

