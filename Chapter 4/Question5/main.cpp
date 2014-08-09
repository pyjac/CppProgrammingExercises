/*
 *
Suppose that the cost of sending an international fax is calculated as follows:
The service charge is $ 3.00, $ .20 per page for the first 10 pages, and $ 0.10 for
each additional page. Design an algorithm that asks the user to enter the
number of pages to be faxed. The algorithm then uses the number of pages
to be faxed to calculate the amount due.


Write a program to implement the algorithm you designed in Exercise 21 of
Chapter 1.

 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double SERVICE_CHARGE = 3.0;
    const double COST_1ST_TEN_PAGES = 0.20;
    const double COST_ADD_PAGES = 0.10;
    int numOfPages;
    double amtDue;

    cout << "Enter number of Pages: ";
    cin >> numOfPages;

    if(numOfPages >=1 && numOfPages <= 10)
        amtDue = SERVICE_CHARGE + COST_1ST_TEN_PAGES * numOfPages ;
    else if( numOfPages > 10 )
        amtDue = SERVICE_CHARGE + COST_1ST_TEN_PAGES * 10
                + COST_ADD_PAGES * (numOfPages - 10);
    else{
        cout << "Invalid Input" << endl;
        return 0;
    }

    cout << "Amount Due is " << amtDue <<endl;

}

