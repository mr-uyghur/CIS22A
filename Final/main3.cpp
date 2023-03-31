#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void tour(ifstream& inFile) {
    // identifying house, and four values that should be input as double: 
    //price, number of bedrooms, number of bathrooms, and square feet of house.
    string mls;
    double price, bedrooms, bathrooms, sqft;

    cout << left << setw(20) << "MLS Number" << "Price per square foot" << endl;

    while (inFile >> mls >> price >> bedrooms >> bathrooms >> sqft) {
        if (bathrooms >= 3) {
            double pricePerSqFt = price / sqft;
            cout << left << setw(20) << mls << fixed << setprecision(2) << pricePerSqFt << endl;
        }
    }
}
