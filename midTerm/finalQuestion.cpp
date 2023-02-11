
/*----------------------------------------------------------------

Write a complete ‘C++’ program to compute the cost of new carpet for a room.

Write the solution as one function main().
Input: Prompt and input from the user the length and width of the room in feet and the price per square yard of the carpet.

Calculations: Calculate subtotal cost by multiplying length and width. Divide this by 9 (number of square feet per square yard) and then multiple by price of carpet per square yard. 
The tax rate is 9.25%. This tax rate needs to be defined as a preprocessor constant.

Output the subtotal, amount of tax, and the total bill (tax + subtotal). Each value should be output with 2 digits to the right of the decimal point.

No need to write comments. No need to show output. No need to line-up decimal points.

Sample run:

Enter length of room in feet: 15.3
Enter width of room in feet: 12
Enter price of carpet per square yard: 17.46
Subtotal      356.18
Tax            32.95
Total         389.13
*/

#include <iostream>
#include <iomanip>
#include <string> 
#define TAX_RATE 0.0925 

using namespace std;

int main()
{

    
    double length,
    width,
    price,
    area,
    subTotal,
    tax,
    total;
    

    cout << "Enter length of room in feet: ";
    cin >> length;
    cout << "Enter width of room in feet: ";
    cin >> width;
    cout << "Enter price of carpet per square yard: ";
    cin >> price;

    area = length * width / 9;

    subTotal = area * price;

    tax = subTotal * TAX_RATE;

    total = subTotal + tax;


    cout << "Subtotal " << setw(5) << subTotal << setprecision(2) << fixed  << endl;
    cout << "Tax " << setw(5) << tax << setprecision(2) << fixed  << endl;
    cout << "Total " << setw(5) << total << setprecision(2) << fixed  << endl;

    cout << "Programmed by Ali Halmamat" << endl;

    cout << "--------------------------" << endl;
    return 0;
    
}
