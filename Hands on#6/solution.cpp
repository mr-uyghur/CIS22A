/*************************************************************
****Key to Hands On #6*************
Highlighted bold text is what needed to be changed/added
**************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
#define DISC_RATE 0.1

// Function prototypes
void signature(void);
double calcDiscount(double &);

int main()
{
    // Declare variaables
    double amtOwing, discount;

    // Input amouont owed
    cout << "Enter amount owed: ";
    cin >> amtOwing;

    // Calculate discount and update amount owing
    discount = calcDiscount(amtOwing);

    // Output discount and undated amount owed
    cout << setprecision(2) << fixed;
    cout << "Amount of Discount: " << discount << endl;
    cout << "Amount Owed: " << amtOwing << endl;

    signature();
    return 0;
}
///////////////////////////////////////////////////////////////
double calcDiscount(double &owe)
{
    /*Pre: owe - reference to amount owed
    Post: Amount of discount
    Purpose: calculate discount and update amount owed to reflect discount*/

    double disc;
    disc = DISC_RATE * owe;
    // Update amount owed
    owe = owe - disc;

    return disc;
} //////////////////////////////////////////////////////////
void signature()
{
    cout << "Programmed by: "
         << "Mary Pape ";
}