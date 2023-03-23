/*
Ali Halmamat
mr.uyghur1996@gmail.com
Lab 6 - Cost of Living
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to compute the composite index
float computeComposite(float groceries, float housing, float utilities, float transportation, float health, float misc) {
    return 0.15 * groceries + 0.29 * housing + 0.1 * utilities + 0.11 * transportation + 0.12 * health + 0.23 * misc;
}

int main() {
    // Open input and output files
    ifstream inFile("Lab6_StateCOL.txt");
    ofstream outFile("output.txt");

    // Check if input file exists
    if (!inFile) {
        cout << "Error: input file not found." << endl;
        return 1;
    }

    // Initialize variables for min and max composite indices and their respective state names
    float minComposite = 1000000, maxComposite = -1;
    string minState, maxState;

    // Loop through input file
    while (!inFile.eof()) {
        // Read state name
        string state;
        getline(inFile, state);

        // Read in the six percentages
        float groceries, housing, utilities, transportation, health, misc;
        inFile >> groceries >> housing >> utilities >> transportation >> health >> misc;

        // Compute composite index
        float composite = computeComposite(groceries, housing, utilities, transportation, health, misc);
        

        // Check if this is the state with the min or max composite index
        if (composite < minComposite) {
            minComposite = composite;
            minState = state;
        }
        if (composite > maxComposite) {
            maxComposite = composite;
            maxState = state;
        }

        // Output the state name and composite index to output file
        // outFile << "State " <<  "    "<< "Composite Index"<< endl;
        // outFile << state << "\t" <<  std::round(composite * 100.0) / 100.0 <<endl;
        // outFile << left << setw(20) << "State" << "Composite Index" << endl;;
        outFile << left << setw(20) << "State" << "Composite Index" << endl;
        outFile << setw(20) << state << std::round(composite * 10.0) / 10.0 << endl;

        //  outFile << setprecision(2) << setw(20) << state << composite << fixed << endl;

        // Read the newline character after the last input value
        char ch;
        inFile.get(ch);
        if (ch != '\n') inFile.get(ch);
    }

    // Output the state names and composite indices for the state with the lowest and highest composite index
    cout << "State\t\tComposite Index" << endl;
    cout << minState << "\t\t" << minComposite << endl;
    cout << maxState << "\t\t" << maxComposite << endl;

    // Close files
    inFile.close();
    outFile.close();

    return 0;
}

/*----------------------------------------------------------------
Program output

State               Composite Index
Mississippi         85
State               Composite Index
Hawaii              187
State               Composite Index
Nebraska            94
State               Composite Index
Tennessee           89.5
State               Composite Index
West Virginia       88.8
State               Composite Index
Indiana             91
State               Composite Index
California          148.4
State               Composite Index
New Mexico          91.1
State               Composite Index
South Carolina      94.2
State               Composite Index
Maryland            120.4
State               Composite Index
Arkansas            90.2
State               Composite Index
Minnesota           98.9
State               Composite Index
Louisiana           92.8
State               Composite Index
South Dakota        96.5
State               Composite Index
Nevada              104.7
State               Composite Index
Massachusetts       133.5
State               Composite Index
Maine               111.8
State               Composite Index
District of Columbia152.8
State               Composite Index
Alabama             88
State               Composite Index
Utah                100.8
State               Composite Index
Rhode Island        114.7
State               Composite Index
Vermont             114.9
State               Composite Index
Kansas              87.9
State               Composite Index
Wisconsin           96.5
State               Composite Index
Connecticut         119.2
State               Composite Index
Delaware            106.2
State               Composite Index
New Jersey          117.8
State               Composite Index
Idaho               97.1
State               Composite Index
North Carolina      96.8
State               Composite Index
Georgia             89.4
State               Composite Index
Pennsylvania        100.3
State               Composite Index
Colorado            105.3
State               Composite Index
Montana             100.6
State               Composite Index
Wyoming             92.7
State               Composite Index
Missouri            91.3
State               Composite Index
Washington          113.7
State               Composite Index
Alaska              129
State               Composite Index
Iowa                90.5
State               Composite Index
Kentucky            92.1
State               Composite Index
New Hampshire       111.6
State               Composite Index
New York            144
State               Composite Index
Oregon              128.4
State               Composite Index
Arizona             106.6
State               Composite Index
Michigan            91.4
State               Composite Index
Illinois            90.7
State               Composite Index
Texas               92.3
State               Composite Index
Ohio                92.4
State               Composite Index
Florida             101.5
State               Composite Index
North Dakota        99.2
State               Composite Index
Oklahoma            88.4
State               Composite Index
Virginia            98.1




----------------------------------------------------------------*/