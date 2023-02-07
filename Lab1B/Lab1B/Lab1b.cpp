/* Ali Halmamat
mr.uyghur1996@gmail.com
Lab 1B - Installing Astroturf */

#include <iostream>

using namespace std;

int main()
{
    // Declare variables length, width, and price of astroturf per square foot
    //plus place holder variables for total price and the area of the yard
    double length, width, price, sum, area;

    // Input length of the yard
    cout << "Enter length of yard in feet: ";
    cin >> length;
    // Input width of the yard
    cout << "Enter width of yard in feet: ";
    cin >> width;
    // price of astroturf per square foot
    cout << "Enter cost of astroturf per square foot: ";
    cin >> price;

    // calculate the area and store it in area var
    area = length * width;
    sum = area * price; //calculate the total price for the entire area of the yard

    //output the area
    cout << "Area to be covered in astroturf: " << area << "square feet " << endl;
    // then output the total cost
    cout << "Total Cost:$ " << sum << endl;

    // Signature
    cout << "Programmed by Ali Halmamat" << endl;
    return 0;
}

/*---------------------------------Program Output--------------------------------------------------

Enter length of yard in feet: 37.5
Enter width of yard in feet: 24.5
Enter cost of astroturf per square foot: 19.25
Area to be covered in astroturf: 918.75square feet
Total Cost:$ 17685.9
Programmed by Ali Halmamat

---------------------------------------------------------------------------------------------------*/