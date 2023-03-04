/*
Ali Halmamat
Mr.uyghur1996@gmail.com
Hands On #5 Counting Prime Numbers
*/

#include <iostream>
using namespace std;

int main()
{
    // variables to hold the beginning and ending values of the range
    //and a variable to keep track of the count of prime numbers found in the range
    int begin, end,count = 0;

    // Prompt the user to enter the beginning value and store it in the 'begin' variable
    cout << "Enter the beginning value: ";
    cin >> begin;

    // Prompt the user to enter the ending value and store it in the 'end' variable
    cout << "Enter the ending value: ";
    cin >> end;


    // Loop through each number in the range from 'begin' to 'end'
    for(int i = begin; i <= end; i++)
    {
        // If the number is 1 or 0, skip to the next iteration of the loop
        if (i == 1 || i == 0)
            continue;

        // Declare a variable to keep track of whether the current number is prime or not
        bool isPrime = true;

        // Loop through each number from 2 to half of the current number
        for(int j = 2; j <= i/2; j++)
        {
            // If the current number is divisible by the loop variable 'j', it is not a prime number
            if(i % j == 0)
            {
                // Set isPrime to false and exit the loop early
                isPrime = false;
                break;
            }
        }

        // If isPrime is still true after the inner loop has finished, the number is prime
        if(isPrime)
        {
            // Increment the count of prime numbers found
            count++;
        }
    }

    //signature
    cout << endl << "Ali Halmamat" << endl;
    // Output the count of prime numbers found in the range
    cout  << "There are " << count << " prime numbers in the given range." << endl;

    return 0;
}


/*----------------------------------------------------------------
Test case 50-100


Output:
Enter the beginning value: 50
Enter the ending value: 100

Ali Halmamat
There are 10 prime numbers in the given range.
----------------------------------------------------------------*/