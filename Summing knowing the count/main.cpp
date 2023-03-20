// Summing and Programming
#include <iostream>
#include <fstream>

using namespace std;
/*
Step 1: Write a program to ask the user for the number of numbers.
Step 2: Then input the numbers.
Step 3: Add summing the values.
Step 4: Add computing the average.
Step 5: Add output to a file
*/

int main()
{
    // Declare variables
    int count, i = 0, sum = 0, number;
    double avg;

    ofstream outFile;
    outFile.open("test.txt");

    // Input number of numbers
    cout << "Enter Number of numbers" << endl;
    cin >> count;

    while (i < count)
    {
        cout << "Enter next number: ";
        cin >> number;
        sum = sum + number;
        i++;
    }
    // Compute average
    avg = static_cast<double>(sum) / static_cast<double>(count);

    // Output average
    cout << "Sum of values: " << sum << endl;
    cout << "Average: " << avg << endl;

    outFile << "Sum of values: " << sum << endl;
    outFile << "Average: " << avg << endl;
    outFile.close(); // Important for output files
    return 0;
}