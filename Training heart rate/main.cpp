#include <iostream>
#include <cstdlib>
using namespace std;

// Prototype
double calcTHR(double restHR, int age);
void output(double);

int main()
{
    // Declare variables
    int age;
    double restHR, trainHR;

    // Input age and resting heart rate
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 0)
    {
        cout << "Invalid age" << endl;
        system("pause");
        exit(100);
    }
    cout << "Enter your resting heart rate: ";
    cin >> restHR;

    // Calculate training heart rate
    trainHR = calcTHR(restHR, age);

    // Output training heart rate
    output(trainHR);

    system("pause");
    return 0;
}
////////////////////////////////////////////////////////////////////////
double calcTHR(double rest, int age)
{
    /* Pre: rest - resting heart rate
    age - person's age in years
    Post: training heart rate
    Purpose: compute and return the value of training heart rate
    */

    // Declare variables
    double trainHR;

    // Compute training heart rate
    trainHR = .7 * (220 - age) + .3 * rest;

    return trainHR;

} // calcTHR
////////////////////////////////////////////
void output(double trainingHR)
{
    /*Pre: traingHR - training heart rate
      Post: nothing
      Purpose: output training heart rate
      */
    cout << endl
         << "Your training heart rate: " << static_cast<int>(trainingHR + .5) << endl;
    return;
}