/*
Ali Halmamat
mr.uyghur1996@gmail.com 
Hands on #2  - Learn to Format
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Utility-type expenses
    double pge = 247.5, xfinity = 186.5, garbage = 83, att = 177.40, water = 141.78;

    double total;

    // Calculate total
    total = pge + xfinity + garbage + att + water;

    //declear vars with integer values for width 
    int val1 = 20, val2 = 10;
    // Output expenses
    //use left() and right() stream manipulators to align text on the left, prices on the right
    //use setw method to set the width, use the int vars
    //setprecision to 2 for coin decimals
    cout << left << setw(val1) << "PG&E" << setprecision(2) << right << setw(val2) << fixed << pge << endl;

    cout << left << setw(val1) << "TV and Internet" << setprecision(2) << setw(val2) << right << xfinity << endl;
    cout << left << setw(val1) << "Waste Management" << setprecision(2) << setw(val2) << right << garbage << endl;
    cout << left << setw(val1) << "Cell Devices" << setprecision(2) << setw(val2) << right << att << endl;
    cout << left << setw(val1) << "Water" << setprecision(2) << right << setw(val2) << water << endl;
    cout << right << setw(val1 + val2) << "-------------" << endl;//set this output to right, no str value on left
    cout << left << setw(val1) << "Total" << setprecision(2) << right << setw(val2) << total  << endl;

    return 0;
}


/*----------------------------program output---------------------------------------------------

PG&E                    247.50
TV and Internet         186.50
Waste Management         83.00
Cell Devices            177.40
Water                   141.78
                 -------------
Total                   836.18

----------------------------program output---------------------------------------------------*/
