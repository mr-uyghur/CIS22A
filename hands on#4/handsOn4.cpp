/*
Ali Halmamat
mr.uyghur1996@gmail.com
Hands On #4
*/

#include <iostream>

// Define the unit cost.
// 31$ per unit according to the de anza link
#define UNIT_COST 31
using namespace std;
// Declare the prototype of the required functions which comes before the main function. 
double calcTuition(double units, double studentFees);
void output(double total);

int main()

{

    // Declare vars for storing units, total cost and student fees data
    //store the user input in the correct var
    double numUnits, studentFees, totalCost;
    //Prompt the user for and input the number of units.
    cout << "Enter the number of units: ";
    cin >> numUnits;
    //Prompt the user for and input the amount for student fees. 
    cout << "Enter the amount for the student fees: ";
    cin >> studentFees;

    // Call the function calcTuition() by passing the captured user input vars
    totalCost = calcTuition(numUnits, studentFees);

    // Call the function output() by passing in the totalcost as the var
    output(totalCost);
}

// Define the function calcTuition() having two doubles as parameters for units and studentFees.
double calcTuition(double units, double studentFees)

{
    
    double total_cost = 0.0;
    // Calculate the total cost by multiplying the unit cost with number of units and then  adding the student fees.
    total_cost = (UNIT_COST * units) + studentFees;

    // Return the total cost.
    return total_cost;
}

//function outputs the following info

void output(double total)
{

    //signature
    cout << "Ali Halmamat" << endl;
    cout << "CWID #20249520" << endl;
    //display the output
    cout << "The total cost for this quarter is: $" << total << endl;
}