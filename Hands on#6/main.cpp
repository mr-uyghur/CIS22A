#include <iostream>
#include <iomanip>
using namespace std;
#define DISC_RATE 0.1

//Function prototypes
void signature(void);
double calcDiscount(double&);

int main()
{
// Declare variables
double amtOwing, discount;


//Input amount owed
cout << "Enter amount owed: " ;
cin >> amtOwing;

//Calculate discount and update amount owing
discount = calcDiscount(amtOwing);

//Output discount and updated amount owed
cout << setprecision(2) << fixed;
cout << "Amount of Discount: " << discount << endl;
cout << "Amount Owed: " << amtOwing << endl;

signature();
return 0;
}
///////////////////////////////////////////////////////////////
double calcDiscount(double& owe)
{
/*Pre: owe - amount owed
Post: Amount of discount
Purpose: calculate discount and update amount owed to reflect discount*/


double disc;
disc = DISC_RATE * owe;
//Update amount owed
owe -= disc;

return disc;
}
//////////////////////////////////////////////////////////
void signature()
{
cout << "Programmed by: " << "Ali Halmamat" << endl;
}