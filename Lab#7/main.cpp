/*
Ali Halmamat
mr.uyghur1996@gmail.com
Universities with Rankings
*/


#include <iostream>

#include <stdlib.h>

#include <string.h>

#include <iomanip>

#include <fstream>

using namespace std;

// Assigning the maximum size to 1000 as

// mentioned in the question

const int SIZE = 1000;

// Define the getData() function.

// The function will read the input text file

// and create seven arrays parallely.

int getData(ifstream &inputfile, string uniName[], string state[], string city[], double tution[], int enrollment[], double avgRetention[], double percentGraduates[])
{
    int i = 0;
    double temp;

    while (!inputfile.eof())
    {
        getline(inputfile, uniName[i]);
        inputfile >> state[i];
        inputfile.ignore(); // Ignore tab character
        getline(inputfile, city[i]);
        inputfile >> tution[i] >> enrollment[i] >> temp >> avgRetention[i] >> percentGraduates[i];
        inputfile.ignore(); // Ignore newline character

        i++;
    }

    return i;
}


// Define the writeFile() function.

// The function will write the required arrays to

// the output file.

void writeFile(ofstream &outputFile, string uniName[], string state[], double tution[], int enrollment[], double avgRetention[], double percentGraduates[], int numRecords)

{

    // Write the headings to the output file

    outputFile << "University\t\t\t\t\t\t\t\tState\t\tTution\t\tEnrollment\t\t%Fresh Successed\t\t%Graduate in six years" << endl;

    for (int i = 0; i < numRecords; i++)

    {

        // Write the data into the output file

        outputFile << uniName[i] << "\t\t\t\t" << state[i] << "\t\t" << tution[i] << "\t\t" << enrollment[i] << "\t\t" << avgRetention[i] << "%\t\t" << percentGraduates[i] << "%" << endl;
    }
}

// Define the avgTutions() function

// The function will return the average tution for

// all the universities

double avgTutions(double tution[], int numRecords)

{

    // Initialize the necessary double variables

    double sum = 0;

    double average = 0;

    for (int i = 0; i < numRecords; i++)

    {

        // Calculate the sum of the data in the tution array

        sum = sum + tution[i];
    }

    // Calculate the average for all the universities

    average = sum / numRecords;

    // Return the value calculated for average

    return average;
}

// Define the maxTutionFee()

// The function will prompt the user to enter maximum

// tution fee he/she can pay and output the list

// of universities to the console.

void maxTutionFee(string uniName[], double tution[], int numRecords)

{

    // Declare a double variable to enter the fees

    double fee;

    // Prompt the user to enter maximum tution fee

    cout << "Enter the maximum tution fee you can pay: " << endl;

    // Read user response

    cin >> fee;

    for (int i = 0; i < numRecords; i++)

    {

        // If the value of tution[] at i is less than

        // or equal to the value of fee

        if (tution[i] <= fee)

        {

            // Print the university name

            cout << uniName[i] << endl;
        }
    }
}



void informationOfColleges(ofstream &outputFile, string uniName[], string state[], double tution[], int enrollment[], double avgRetention[], double percentGraduates[], int numRecords)

{

    // Declare a string variable

    string abState;


    cout << "Enter two-letter abbreviation for the state: " << endl;

    // Read the user response

    cin >> abState;

    int flag = 0;

    for (int i = 0; i < numRecords; i++)

    {

        // Check if the user's input is present in

        // the state[] array

        if (abState == state[i])

        {

            flag = 1;

            // Display the list to the output file

            outputFile << uniName[i] << "\t\t\t\t" << state[i] << "\t\t" << tution[i] << "\t\t" << enrollment[i] << "\t\t" << avgRetention[i] << "%\t\t" << percentGraduates[i] << "%" << endl;
        }
    }

    // Check if flag is equal to 0

    if (flag == 0)

    {

        // Display no college in list

        outputFile << "No colleges in " << abState << " state in the list" << endl;
    }
}



double lowestTution(double tution[], int numRecords)

{

    // Assign the first index value to a variable

    double lowTution = tution[0];

    for (int i = 1; i < numRecords; i++)

    {

        // Check for the lowest value

        if (lowTution > tution[i])

        {

            // Assign the lowest value to the variable

            lowTution = tution[i];
        }
    }

    // Return the lowest value

    return lowTution;
}



void selectionSortcolleges(string uniName[], string state[], double tution[], int enrollment[], double avgRetention[], double percentGraduates[], int numRecords)

{

    // Declare the necessary temporary variables

    string tempString;

    int tempInteger;

    double tempDouble;

    // Declare a variable for the minimum value index

    int minIndex;

    for (int i = 0; i < numRecords - 1; i++)

    {

        // Assign i to minIndex

        minIndex = i;

        for (int x = i + 1; x < numRecords; x++)

        {

            // Check if enrollment[x] is less than

            // enrollment[minIndex]

            if (enrollment[minIndex] > enrollment[x])

            {

                // Assign x to minIndex

                minIndex = x;
            }
        }

        // Swap university

        tempString = uniName[i];

        uniName[i] = uniName[minIndex];

        uniName[minIndex] = tempString;

        // Swap state

        tempString = state[i];

        state[i] = state[minIndex];

        state[minIndex] = tempString;

        // Swap tution

        tempDouble = tution[i];

        tution[i] = tution[minIndex];

        tution[minIndex] = tempDouble;

        // Swap enrollment

        tempInteger = enrollment[i];

        enrollment[i] = enrollment[minIndex];

        enrollment[minIndex] = tempInteger;

        // Swap average retention for freshman

        tempDouble = avgRetention[i];

        avgRetention[i] = avgRetention[minIndex];

        avgRetention[minIndex] = tempDouble;

        // Swap percent graduated in six years

        tempDouble = percentGraduates[i];

        percentGraduates[i] = percentGraduates[minIndex];

        percentGraduates[minIndex] = tempDouble;
    }
}

// Define the main() function

int main()

{

    // Declare the necessary arrays

    string uniName[SIZE];

    string state[SIZE];

    string city[SIZE];

    double tution[SIZE];

    int enrollment[SIZE];

    double avgRetention[SIZE];

    double percentGraduates[SIZE];

    // Declare the necessary variables

    int numRecords;

    double averageOfTutions;

    // Create an ifstream object

    ifstream inputfile;

    // Create an ofstream object

    ofstream outputfile;

    // Open the input file

    inputfile.open("universitiesRanked.txt");

    // Check if the input file exists

    if (!inputfile)

    {

        cout << "Error: Cannot find file!" << endl;

        exit(0);
    }

    // Open the output file

    outputfile.open("OutputFileUniversities.txt");

    cout << "Calling getData() function..." << endl;


    numRecords = getData(inputfile, uniName, state, city, tution, enrollment, avgRetention, percentGraduates);

    // Set precision to two decimal points

    outputfile << fixed << setprecision(2);

    for (int x = 0; x < numRecords; x++)

    {

        // Multiply average retention and percent

        // graduates by 100

        avgRetention[x] = avgRetention[x] * 100;

        percentGraduates[x] = percentGraduates[x] * 100;
    }

    cout << "\nCalling writeFile() function..." << endl;

    // Call the writeFile() function and display

    // the original file

    writeFile(outputfile, uniName, state, tution, enrollment, avgRetention, percentGraduates, numRecords);

    cout << "\nCalling avgTutions() function..." << endl;

    // Call the averageOfTutions() function and

    // assign the value returned from the function

    averageOfTutions = avgTutions(tution, numRecords);

    // Display the returned value to the screen

    cout << "Average of tutions: " << averageOfTutions << endl;

    cout << "\nCalling maxTutionFee() function..." << endl;

    // Call the maxTutionFee() function

    maxTutionFee(uniName, tution, numRecords);

    cout << "\nCalling informationOfColleges() function..." << endl;

    // Call the informationOfColleges() function

    informationOfColleges(outputfile, uniName, state, tution, enrollment, avgRetention, percentGraduates, numRecords);

    cout << "\nCalling lowestTution() function..." << endl;

 

    double lowest = lowestTution(tution, numRecords);

    for (int i = 0; i < numRecords; i++)

    {

        // Check if tution[i] is equal to lowest

        if (tution[i] == lowest)

        {

            // Display the university name and the tution

            cout << uniName[i] << " " << tution[i] << endl;
        }
    }

    cout << "Calling selectionSortcolleges() function..." << endl;

    // Call the selectionSortcolleges() function

    selectionSortcolleges(uniName, state, tution, enrollment, avgRetention, percentGraduates, numRecords);

    cout << "Calling writeFile() function..." << endl;

    // Call the writeFile() function

    writeFile(outputfile, uniName, state, tution, enrollment, avgRetention, percentGraduates, numRecords);

    // Close the input and output file

    inputfile.close();

    outputfile.close();

    return 0;
}