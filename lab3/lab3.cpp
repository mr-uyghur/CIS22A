/* Ali Halmamat
mr.uyghur1996@gmail.com
Lab 3 - ETS CIS Refresh 2022 */


/* =================================================================

Write a program to create an invoice for the De Anza College Advance Technology Building CIS computer refresh for 2022. 
All PC computers in the CIS Lab and in classrooms AT 204, 205, 311, & 312 were replaced with Dell All-in-One, model Wyse 5470 Thin Client with 24 inchallOne.jpg screens.
These computers are “Zoom” ready at the cost of $1001 each. 
All the tables in classrooms AT 204, 205, 311, & 312 were replaced with 24 X 72 inch tablestable.jpg at $429.88 each.
Macs were replaced with Apple iMac (24-inch, Apple M1 chip with 8‑core CPU and 7‑core GPU, 8GB RAM, 256GB) iMac (24-inch) at a cost of $1299 each.
Also some replacement Dell Keyboards at $18.30 each and some Dell Mouses at $16.45 each were ordered.

Input

Prompt the user and input for the quantity of each product ordered.

Sample run showing input from user:
How many 24 x 72 inch tables ordered? 120
How many Dell All-in-One Thin Clients ordered? 351
How many Apple iMac computers? 26
How many Dell Keyboards ordered? 12
How many Dell mouses ordered? 5

Calculations/Processing

Calculate the subtotal for each item. Catculate and the subtotal of the bill and the tax on this subtotal. Last calculate the total of subtotal plus tax.

Output:
Sample output

QTY  Description                  Unit Price      Total Price
120  TABLES 24 X 72 INCH             429.88         51585.60
351  DELL ALL-IN-ONE THIN CLIENTS   1001.00        351351.00
 26  APPLE iMac 24-inch             1299.00         33774.00
 12  DELL KEYBOARD                    18.30           219.60
  5  DELL MOUSE                       16.45            82.25                

                    SUBTOTAL      430012.45
                         TAX       39899.24
                       TOTAL      476911.69

=================================================================*/

#include <iostream>
#include <iomanip>
#include <string> 
#define TAX_RATE 0.0913 //Cupertino current sales tax

using namespace std;

int main()
{
    //use double for price value vars
    double totalSum, //pre tax price,
    tax, // price after tax
    total;
    //declear constant double for unit prices 
    const double pen = 65.50,
    bag = 311.47,
    earbuds = 52.20;
    
    //store the date in this string var
    string date = "";
    //use int for capturing units for each product
    int people, totalPens, totalBags, totalEarbuds;


    // Input width of the yard
    cout << "Enter Number of RSVPs received: ";
    cin >> people;

    // totalPens = (people + 50 - 1) / 50;
    // totalBags = (people + 125  - 1) / 125 ;
    // totalEarbuds = (people + 30  - 1) / 30 ;

    // double penPrice = totalPens * pen;
    // double bagPrice = totalBags * bag;
    // double earbudsPrice = totalEarbuds * earbuds;

    // totalSum = penPrice + bagPrice + earbudsPrice;
    tax = totalSum * TAX_RATE;
    total = totalSum + tax;

    //----------use the follow code for output -----------------------
    // int val1 = 20, val2 = 10;
    // cout << left << setw(val1) << "PG&E" << setprecision(2) << right << setw(val2) << fixed << pge << endl;

    // cout << left << setw(val1) << "TV and Internet" << setprecision(2) << setw(val2) << right << xfinity << endl;
    // cout << left << setw(val1) << "Waste Management" << setprecision(2) << setw(val2) << right << garbage << endl;
    // cout << left << setw(val1) << "Cell Devices" << setprecision(2) << setw(val2) << right << att << endl;
    // cout << left << setw(val1) << "Water" << setprecision(2) << right << setw(val2) << water << endl;
    // cout << right << setw(val1 + val2) << "-------------" << endl;//set this output to right, no str value on left
    // cout << left << setw(val1) << "Total" << setprecision(2) << right << setw(val2) << total  << endl;

    // Signature
    cout << "Programmed by Ali Halmamat" << endl;

    cout << "--------------------------" << endl;
    return 0;
    
}

/*----------------------------------------------------------------program output----------------------------------------------------------------







----------------------------------------------------------------program output----------------------------------------------------------------*/