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



Calculations/Processing

Calculate the subtotal for each item. Catculate and the subtotal of the bill and the tax on this subtotal. Last calculate the total of subtotal plus tax.


1) Include name, e-mail, and lab# as comments in code and include code to output this information to the output.

2) Minimum of five (5) comments in main()

3) Use a defined constant for the tax rate 9.13% currently for Cupertino CA

4) Use a memory constant for each unit price

5) Output must be formatted exactly as above with decimal points lined up.



=================================================================*/

#include <iostream>
#include <iomanip>
#include <string> 
#define TAX_RATE 0.0913 //Cupertino current sales tax

using namespace std;

int main()
{
    //declear constant double for unit prices 
    const double computers = 1001,
    tables = 429.88,
    macs = 1299,
    keyboards = 18.30,
    mouses = 16.45;

    //use double for price value 
    double computerTotal, 
    tabelTotal,
    macTotal,
    keyboardTotal,
    mouseTotal,
    subTotal, //pre tax price,
    tax, // price after tax
    total;
    
    //use int for capturing units for each product
    int computerUnits, 
    tabelUnits,
    macUnits,
    keyboardUnits,
    mouseUnits;

    /*
    Input
    Prompt the user and input for the quantity of each product ordered.
    Sample run showing input from user:
    How many 24 x 72 inch tables ordered? 120
    How many Dell All-in-One Thin Clients ordered? 351
    How many Apple iMac computers? 26
    How many Dell Keyboards ordered? 12
    How many Dell mouses ordered? 5
    */
   
    //Capture unit numbers and sttore the value in the correct var
    cout << "How many 24 x 72 inch tables ordered?: ";
    cin >> tabelUnits;
    cout << "How many Dell All-in-One Thin Clients ordered?: ";
    cin >> computerUnits;
    cout << "How many Apple iMac computers?: ";
    cin >> macUnits;
    cout << "How many Dell Keyboards ordered?: ";
    cin >> keyboardUnits;
    cout << "How many Dell mouses ordered?: ";
    cin >> mouseUnits;



    //store the total price by multiplying unit value and unit prices
    computerTotal = computerUnits * computers;
    tabelTotal = tabelUnits * tables;
    macTotal = macUnits * macs;
    keyboardTotal = keyboardUnits * keyboards;
    mouseTotal = mouseUnits * mouses;

    //pre tax price for the total units of products ordered
    subTotal = computerTotal + tabelTotal + macTotal + keyboardTotal +mouseTotal;

    //calculate the tax rate
    tax = subTotal * TAX_RATE;

    //calculate the total price after tax by adding the subtotal to the tax
    total = subTotal + tax;

    //----------use the follow code for output -----------------------
/*
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
    
    */
    int val1 = 20, val2 = 10;
    cout << left << setw(5) << "QTY" << setprecision(2) << setw(val2) <<right << "Description" << setw(30)  << "Unit Price" << setw(val1) << fixed << "Total Price" << right  << endl;
    cout << left << setw(5) << tabelUnits << setprecision(2) << setw(val2) <<left << "TABLES 24 X 72 INCH" << setw(22)  << tables << setw(val1) << tabelTotal   << endl;

    cout << left << setw(5) << computerUnits << setprecision(2) << setw(val2) <<right << "DELL ALL-IN-ONE THIN CLIENTS" << setw(13)  << computers << setw(val1) << computerTotal   << endl;

    cout << left << setw(5) << macUnits << setprecision(2) << setw(val2) <<right << "APPLE iMac 24-inch" << setw(23)  << macs << setw(val1) << macTotal  << endl;

    cout << left << setw(5) << keyboardUnits << setprecision(2) << setw(val2) <<right << "DELL KEYBOARD" << setw(28)  << keyboards << setw(val1) << keyboardTotal  << endl;

    cout << left << setw(5) << mouseUnits << setprecision(2) << setw(val2) <<right << "DELL MOUSE" << setw(31)  << mouses << setw(val1) << mouseTotal   << endl;

    cout << endl;
    cout << left << setw(5) << "   " << setprecision(2) << setw(val1) <<right << "SUBTOTAL" << setw(21)  << subTotal << setw(val1) << fixed << "" << right  << endl;
    cout << left << setw(5) << "   " << setprecision(2) << setw(val1) <<right << "TAX" << setw(21)  << tax << setw(val1) << fixed << "" << right  << endl;
    cout << left << setw(5) << "   " << setprecision(2) << setw(val1) <<right << "TOTAL" << setw(21)  << total << setw(val1) << fixed << "" << right  << endl;
    // Signature
    cout << endl;
    cout << "Programmed by Ali Halmamat" << endl;

    cout << "--------------------------" << endl;
    return 0;
    
}

/*----------------------------------------------------------------program output----------------------------------------------------------------

•Test Data 1: 120, 351, 26, 12, 5
How many 24 x 72 inch tables ordered?: 120
How many Dell All-in-One Thin Clients ordered?: 351
How many Apple iMac computers?: 26
How many Dell Keyboards ordered?: 12
How many Dell mouses ordered?: 5
QTY  Description                    Unit Price         Total Price
120  TABLES 24 X 72 INCH429.88                51585.60
351  DELL ALL-IN-ONE THIN CLIENTS      1001.00           351351.00
26   APPLE iMac 24-inch                1299.00            33774.00
12   DELL KEYBOARD                       18.30              219.60
5    DELL MOUSE                          16.45               82.25

                 SUBTOTAL            437012.45
                      TAX             39899.24
                    TOTAL            476911.69

Programmed by Ali Halmamat
--------------------------

•Test Data 2:  30, 45, 0, 100, 5
How many 24 x 72 inch tables ordered?: 30
How many Dell All-in-One Thin Clients ordered?: 45
How many Apple iMac computers?: 0
How many Dell Keyboards ordered?: 100
How many Dell mouses ordered?: 5
QTY  Description                    Unit Price         Total Price
30   TABLES 24 X 72 INCH429.88                12896.40
45   DELL ALL-IN-ONE THIN CLIENTS      1001.00            45045.00
0    APPLE iMac 24-inch                1299.00                0.00
100  DELL KEYBOARD                       18.30             1830.00
5    DELL MOUSE                          16.45               82.25

                 SUBTOTAL             59853.65
                      TAX              5464.64
                    TOTAL             65318.29

Programmed by Ali Halmamat
--------------------------





----------------------------------------------------------------program output----------------------------------------------------------------*/