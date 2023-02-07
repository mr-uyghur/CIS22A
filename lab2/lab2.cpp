/* Ali Halmamat
mr.uyghur1996@gmail.com
Lab 2 – Swag for De Anza’s Spring 2023 Open House */

#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

int main()
{
    //declear unit prices double for price value vars
    double pen = 65.50,
    bag = 311.47,
    earbuds = 52.20,
    totalSum, //pre tax price
    taxRate = 0.0925,
    tax,
    total; // price after tax
    //store the date in this string var
    string date = "";
    //use int for capturing number of people and the number of packeges needed
    int people, totalPens, totalBags, totalEarbuds;

    // Input length of the yard
    cout << "Enter Month and Year: ";
    getline(std::cin, date);//use getline to capture the date value
    // Input width of the yard
    cout << "Enter Number of RSVPs received: ";
    cin >> people;

    totalPens = (people + 50 - 1) / 50;
    totalBags = (people + 125  - 1) / 125 ;
    totalEarbuds = (people + 30  - 1) / 30 ;

    double penPrice = totalPens * pen;
    double bagPrice = totalBags * bag;
    double earbudsPrice = totalEarbuds * earbuds;

    totalSum = penPrice + bagPrice + earbudsPrice;
    tax = totalSum * taxRate;
    total = totalSum + tax;


    int val1 = 20, val2 = 15;
    cout << left << "Month: " << date << fixed << endl;

    cout << left << setw(val1) << "ITEM" << setw(17) << "#PACKAGES" << setw(13) << "UNIT COST"  << setw(5) <<  "SUBTOTAL"  << right << endl;
    cout << left << setw(val1) << "Pens" << setw(17) << totalPens << setw(val2)   << setprecision(2) << pen<< setw(5)    << penPrice  << endl;
    cout << left << setw(val1) << "Bags" << setw(17) << totalBags << setw(val2) << setprecision(2) << bag << setw(5)  << bagPrice   << endl;
    cout << left << setw(val1) << "earbuds" << setw(17) << totalEarbuds << setw(val2) << setprecision(2) << earbuds << setw(5)  << earbudsPrice   << endl;
    cout << fixed <<endl;
    cout << left << setw(val2) << "Subtotal" << setw(10) << totalSum   << endl;
    cout << left << setw(val2) << "tax" << setw(10) << tax   << endl;
    cout << left << setw(val2) << "Total" << setw(10) << total   << endl;

    cout << endl;
    // Signature
    cout << "Programmed by Ali Halmamat" << endl;

    cout << "--------------------------" << endl;
    return 0;
    
}

/*----------------------------------------------------------------program output----------------------------------------------------------------



Enter Month and Year: April 2023
Enter Number of RSVPs received: 347
Month: April 2023
ITEM                #PACKAGES        UNIT COST    SUBTOTAL
Pens                7                65.50          458.50
Bags                3                311.47         934.41
earbuds             12               52.20          626.40

Subtotal       2019.31
tax            186.79
Total          2206.10

Programmed by Ali Halmamat
--------------------------



----------------------------------------------------------------program output----------------------------------------------------------------*/