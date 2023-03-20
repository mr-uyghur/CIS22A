#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
/*
Step 1: Write a program to ask the user for the number of numbers.
Step 2: Then input the numbers.
Step 3: Add summing the values.
Step 4: Add computing the average.
Step 5: Add output to a file
Step 6: Add input of values from file
*/

int main()
{

    // Declare variables
    int count, i = 0, sum = 0, number;
    double avg;

    ofstream outFile;
    outFile.open("test.txt");

    ifstream inFile;
    inFile.open("values.txt");
    if (inFile.fail() == 1)
    {
        cout << "No such file!" << endl;
        exit(100);
    }

    // Input number of numbers from the user
    // cout << "Enter number of numbers to be added: ";
    // cin >> count;
    inFile >> count;

    // Input values from user
    while (i < count)
    {
        // cout << "Enter a number: ";
        inFile >> number;
        sum = sum + number;
        i = i + 1;
    }
    inFile.close();
    avg = static_cast<double>(sum) / static_cast<double>(count);

    cout << "Sum of Values: " << sum << endl;
    cout << "Average: " << avg << endl;

    outFile << "Sum of Values: " << sum << endl;
    outFile << "Average: " << avg << endl;
    outFile.close(); // Important for output files
    return 0;
}