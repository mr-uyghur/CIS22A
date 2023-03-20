/*
Ali Halmamat
mr.uyghur1996@gmail.com
Lab#5 IRWD Water Bill expanded
*/

#include <iostream>
#include <iomanip>
#define MAX_ALLOWED 50
using namespace std;


// This function returns the allocation of water depending on the numbers of people and month
double water_allocation(int num_of_people, int month,int num_of_days)
{
    /* Pre: num_of_people - amount of people to allocate
    month - the number of month
    num_of_days - the number of day in that month
    Post: calculate the result with the given formula
    (assume a 30 day month).
    So if 4 people: 8.02 =50*people*30/748 =50*4*30/748
    Purpose: compute and return the value of training water allocation
    */
//    Calculate budget (water allocation) for people. Allow 50 gallons per person
    double result = MAX_ALLOWED*num_of_people * num_of_days/748;
    return result;
    
}

// This function calculates the budget for outdoor landscape
double budget_for_outdoor_landscape(char type_of_residence, int month)
{
    if (type_of_residence == 'S' || type_of_residence == 's')
    {
        if (month == 1 || month == 2 || month == 3 || month == 4 || month == 10 || month == 11 || month == 12)
            return 2.30;
        else
            return 4.25;
    }
    else if (type_of_residence == 'C' || type_of_residence == 'c')
    {
        if (month == 1 || month == 2 || month == 3 || month == 4 || month == 10 || month == 11 || month == 12)
            return 0.75;
        else
            return 1.50;
    }
    else
        return 0.00;
}


// This function calculates the total budget, it first calculates the water budget and then it calculates the outdoor
// budget and then it compares the total budget with the actual CCF and accordingly calculates the total price
double total_budget( double actualCCF,double water_budget,double landscape_budget)
{
    /* Pre: actualCCF - the CFF input
    water_budget - water budget from the first calculation
    landscape_budget -  landscape_budget is the price rate depending on the month
    Post: calculate the total price with water and lanscape budget
    */
   
    double total_budget = water_budget + landscape_budget;
    double total_price = 0.0;
    // fixed and set-precision is used for limiting the precision to 2
    cout << fixed;
    // cout << "Budget for people and landscape: " << setprecision(2) << total_budget << endl;
    
    return total_price;
    
}

double fourthCalculation(double water_budget,double totalBudget, double actualCCF,int num_of_days  ){
        /* Pre: actualCCF - the CFF input
    water_budget - water budget from the first calculation
    totalBudget -  totalBudget is the sum of water and lanscape budget
    Post: calculate the total costwith the following conditions
     Calculate Cost as $1.53 per CCF used under or equal to their water budget and $5.15 per
    CCF on amount water used above their water budget. 
    */
   
    
    //Water service = number of days in billing cycle times $0.8966 per day
    //Sewer service = number of days in billing cycle times $0.6818 per day
    double waterService = num_of_days * 0.8966;
    double sewerService = num_of_days * 0.6818;
    double cost = 0.0;
   
    if(actualCCF <= water_budget){
           cost = actualCCF * 1.53 + waterService + sewerService;
    }
       else
       cost = totalBudget * 1.53 + (actualCCF - totalBudget) * 5.15 + waterService + sewerService;
        // cout << "Total cost: $" << cost << endl;
}



double calcAllotment(int numPeople, int numDays) {
    const int GALLONS_PER_PERSON_PER_DAY = 50;
    const int GALLONS_PER_CCF = 748;
    double allottedWater = numPeople * GALLONS_PER_PERSON_PER_DAY * numDays / GALLONS_PER_CCF;
    return allottedWater;
}

void calcCosts(double allottedWater, int numDays, double waterUsed) {
    const double WATER_BUDGET_RATE = 1.53;
    const double WATER_EXCESS_RATE = 5.15;
    const double WATER_OVERUSE_RATE = 14.64;
    const double WATER_SERVICE_RATE = 0.8966;
    const double SEWER_SERVICE_RATE = 0.6818;
    double costOfWater = 0.0;
    double waterService = numDays * WATER_SERVICE_RATE;
    double sewerService = numDays * SEWER_SERVICE_RATE;
    
    if (waterUsed <= allottedWater) {
        costOfWater = waterUsed * WATER_BUDGET_RATE;
    } else if (waterUsed <= allottedWater * 1.4) {
        costOfWater = allottedWater * WATER_BUDGET_RATE +
            (waterUsed - allottedWater) * WATER_EXCESS_RATE;
    } else {
        costOfWater = allottedWater * WATER_BUDGET_RATE +
            (allottedWater * 0.4) * WATER_EXCESS_RATE +
            (waterUsed - allottedWater * 1.4) * WATER_OVERUSE_RATE;
    }
    
    double totalCost = costOfWater + waterService + sewerService;
    cout << "Cost of water:" << costOfWater << endl;
    cout << "Water service:" << waterService << endl;
    cout << "Sewer service:" << sewerService << endl;
    cout << "Total " << totalCost << endl;
}


int main()
{
    int num_of_people;
    char type_of_residence;
    int month;
    int num_of_days;
    double actualCCF;

    cout << "Enter number of people in household: ";
    cin >> num_of_people;
 
    if (num_of_people < 0)
    {
        cout << "Invalid number of people!" << endl;
        return 0;
    }

    cout << "Enter type of residence: 'S' for single family, 'C' for condo or 'A' for apartment: ";
    cin >> type_of_residence;
    if (!(type_of_residence == 'S' || type_of_residence == 's' || type_of_residence == 'A' || type_of_residence == 'a' || type_of_residence == 'C' || type_of_residence == 'c'))
    {
        cout << "Invalid entry for residence." << endl;
        return 0;
    }

    cout << "Enter Month: ";
    cin >> month;
    //validation for months
    if (month < 1 or month > 12)
    {
        cout << "Invalid month." << endl;
        return 0;
    }
    cout << "Enter number of days in billing cycle: " ;
    cin >> num_of_days;
    //validation for then number of days in a month
    if (num_of_days < 1 or num_of_days > 31)
    {
        cout << "Invalid days" << endl;
        return 0;
    }
    cout << "Enter Actual CCF used: " ; 
    cin >> actualCCF;
    cout << "\n";
   
    double water_budget = water_allocation(num_of_people, month, num_of_days);
    double landscape_budget = budget_for_outdoor_landscape(type_of_residence, month);
    double totalBudget = total_budget( actualCCF, water_budget,landscape_budget);
    double allotment = calcAllotment(num_of_people, num_of_days);
    calcCosts(allotment, num_of_days, water_budget);
    fourthCalculation(water_budget,totalBudget,actualCCF,num_of_days);
    return 0;
}


/*----------------------------------------------------------------Sample output ----------------------------------------------------------------



Enter number of people in household: 4
Enter type of residence: 'S' for single family, 'C' for condo or 'A' for apartment: s
Enter Month: 3
Enter number of days in billing cycle: 28
Enter Actual CCF used: 12.0

Budget for people and landscape: 9.30
Cost of water:10.71
Water service:25.10
Sewer service:19.09
Total 54.91
Total cost: $106.00

------------------------------------------------------------------------------------------------------------------------------------------------*/