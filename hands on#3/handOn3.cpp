// Correct the errors in the following program
// Upload the .cpp file with your output copied
//& pasted at the bottom as a comment
//(Change my name to your name)
// Use 10 as the test data
#include <iostream>
using namespace std;
// Pi value corrected
#define PI 3.141592

int main()
{
    // Declare variables, use double since the values contain decimals
    double radius,
        area;
    // Input the radius
    cout << "Enter the radius: ";
    // capture the radius
    cin >> radius;

    // Compute the area
    area = PI * radius * radius;

    // Output the area
    cout << "Area of Circle: " << area << endl;
    cout << "\n\nAli Halmamat\n\n";
    system("pause");
    return 0;
}

/*----------------------------------------------------------------Program Output ----------------------------------------------------------------

Enter the radius: 10
Area of Circle: 314.159


Ali Halmamat

Press any key to continue . . .




----------------------------------------------------------------Program Output ----------------------------------------------------------------*/