/* 
Conversion from miles to kilometers
miles = 1.60934 kilometers */

#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    double miles, km;

    // Input number of miles
    cout << "Enter number of miles: ";
    cin >> miles;

    // Convert miles to kilometers
    km = miles * 1.60934; // literal constant

    // Output distance in kilometers
    cout << "Distance in kilometers: " << km << " kilometers" << endl;

    return 0;
}