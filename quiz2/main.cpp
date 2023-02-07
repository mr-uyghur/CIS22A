/*
Walking on a treadmill burns 277 calories per hour. Since 3500 calories is what you must burn to lose a pound, calories burned per hour time hours divided by 3500 gives the number of pounds lost.

Write a complete C++ program to prompt the user for and input the number of hours that a person walks on a treadmill. Calculate the number of pounds this is. Output the number of pounds. No comments are necessary but it must be a complete program.

Sample run:

How many hours on treadmill? 30.5

Number of pounds:  2.41
*/

/* Ali Halmamat
mr.uyghur1996@gmail.com
 */
#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;
int main()
{
    //use double for calories value and the time captured
    double caloriesTredmill = 277,
    caloriesLosePerPound = 3500,
    time;
    //store the user input in time var
    cout << "How many hours on treadmill? ";
    cin >> time;
    // use the calories burned per hour time hours divided by 3500 formula to calculate the lost weight
    double poundLost = (time * caloriesTredmill) / caloriesLosePerPound;
    //output the result with set precision for 2 decimal place
    cout << "Number of pounds: " << setprecision(3) << poundLost  << endl;
    cout << fixed << endl;
    // Signature
    cout << "Programmed by Ali Halmamat" << endl;

    return 0;
    
}

