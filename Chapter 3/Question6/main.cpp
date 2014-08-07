/*
 *A permutation of three objects, a, b, and c, is any arrangement of these
objects in a row. For example, some of the permutations of these objects
are abc, bca, and cab. The number of permutations of three objects is six.
Suppose that these three objects are strings. Write a program that prompts
the user to enter three strings. The program then outputs the six permu-
tations of those strings.

                                  ^
                                  |
                                  |
Redo Programming Exercise 21, in Chapter 2, so that each string can store
a line of text.
 *
 */


#include <iostream>
#include <string>

using namespace std;

int main()
{

    string a, b, c;

    string firstPermu, secondPermu, thirdPermu, fouthPermu,
            fifthPermu, sixthPermu;

    cout << "Enter First string: " ;
    getline(cin, a);

    cout << "Enter Second string: ";
    getline(cin, b);

    cout << "Enter Third string: ";
    getline(cin, c);


    firstPermu = a + b + c;
    secondPermu = b + a + c;
    thirdPermu = b + c + a;
    fouthPermu = c + b + a;
    fifthPermu = c + a + b;
    sixthPermu = a + c + b;

    cout << "First Permuation : " << firstPermu << endl;
    cout << "Second Permuation : " << secondPermu << endl;
    cout << "Thrid Permuation : " << thirdPermu << endl;
    cout << "Forth Permuation : " << fouthPermu << endl;
    cout << "Fifth Permuation : " << fifthPermu << endl;
    cout << "Sixth Permuation : " << sixthPermu << endl;

    return 0;
}

