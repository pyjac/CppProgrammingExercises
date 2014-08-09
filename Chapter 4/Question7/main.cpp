/*
 *
A box of cookies can hold 24 cookies, and a container can hold 75 boxes
of cookies. Write a program that prompts the user to enter the total
number of cookies, the number of cookies in a box, and the number of
cookie boxes in a container. The program then outputs the number of
boxes and the number of containers to ship the cookies. Note that each
box must contain the specified number of cookies, and each container
must contain the specified number of boxes. If the last box of cookies
contains less than the number of specified cookies, you can discard it and
output the number of leftover cookies. Similarly, if the last container
contains less than the number of specified boxes, you can discard it and
output the number of leftover boxes.

 */

#include <iostream>

using namespace std;

int main()
{
    int totalNumberOfCookies,numOfCookiesInBox,
            numOfBoxesInContainer;

    int numOfContainer,numOfBoxes,remainCookies,remainBoxes;

    cout<< "Enter total number of cookies: ";
    cin >> totalNumberOfCookies;

    cout<< "Enter number of cookies in a box: ";
    cin >> numOfCookiesInBox;

    cout<< "Enter number of cookie boxes in a container: ";
    cin >> numOfBoxesInContainer;

    numOfBoxes = totalNumberOfCookies / numOfCookiesInBox;
    remainCookies = totalNumberOfCookies % numOfCookiesInBox;
    numOfContainer = numOfBoxes / numOfBoxesInContainer;
    remainBoxes = numOfBoxes % numOfBoxesInContainer;

    cout << "Requirements for Shipment"<<endl;
    cout << "Number of Containers: "<< numOfContainer << endl;
    cout << "Number Of Boxes: "<< remainBoxes << endl;
    cout << "Remaining cookies: "<<remainCookies << endl;

    return 0;
}

