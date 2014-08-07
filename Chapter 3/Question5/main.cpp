/*
 * The manager of a football stadium wants you to write a program that
calculates the total ticket sales after each game. There are four types of
tickets—box, sideline, premium, and general admission. After each game,
data is stored in a file in the following form:

ticketPrice numberOfTicketsSold
...

Sample data are shown below:
250 5750
100 28000
50  35750
25  18750

The first line indicates that the ticket price is $250 and that 5750 tickets were
sold at that price. Output the number of tickets sold and the total sale
amount. Format your output with two decimal places.
 *
 */

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;
    int priceOfBoxTicket, priceOfSidelineTicket, priceOfPremiumTicket,
            priceOfGenAdmissionTicket;

    int numOfBoxTicketSold,numOfSidelineTicketSold,numOfPremiumTicketSold,
            numOfGenAdmissionTicketSold;

    int amtOfBoxTicketSold, amtOfSidelineTicketSold, amtOfPremiumTicketSold,
            amtOfGenAdmissionTicketSold;

    long totalNumOfTicketsSold,totalSaleAmount;
    cout << fixed << showpoint << setprecision(2);

    inFile.open("TicketsSoldFile.txt");

    inFile >> priceOfBoxTicket >> numOfBoxTicketSold
           >> priceOfSidelineTicket >> numOfSidelineTicketSold
           >> priceOfPremiumTicket >> numOfPremiumTicketSold
           >> priceOfGenAdmissionTicket >> numOfGenAdmissionTicketSold;

    amtOfBoxTicketSold = priceOfBoxTicket * numOfBoxTicketSold;
    amtOfSidelineTicketSold = priceOfSidelineTicket * numOfSidelineTicketSold;
    amtOfPremiumTicketSold = priceOfPremiumTicket * numOfPremiumTicketSold;
    amtOfGenAdmissionTicketSold = priceOfGenAdmissionTicket * numOfGenAdmissionTicketSold;

    totalNumOfTicketsSold = numOfBoxTicketSold + numOfSidelineTicketSold
                            + numOfPremiumTicketSold + numOfGenAdmissionTicketSold;

    totalSaleAmount = amtOfBoxTicketSold + amtOfSidelineTicketSold +
                        amtOfPremiumTicketSold + amtOfGenAdmissionTicketSold;

    cout << "Total number of Tickets sold is " << totalNumOfTicketsSold <<endl;
    cout << "Total Sale Amount: " << totalSaleAmount << endl;

    inFile.close();
    return 0;
}

