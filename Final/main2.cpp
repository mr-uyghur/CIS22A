#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
void getDimensions(double &length, double &width, double &height);
double calc(double length, double width, double height, double &surfaceArea);

int main() {
    double length, width, height, volume, surfaceArea;

    // Input dimensions of rectangular parallelepiped from user
    getDimensions(length, width, height);

    // Compute volume and surface area
    volume = calc(length, width, height, surfaceArea);

    // Output the volume and surface area of the rectangular parallelepiped
    cout << setprecision(3) << fixed;
    cout << "Volume of rectangular parallelepiped :      " << setw(10) << volume << " cubic units" << endl;
    cout << "Surface Area of rectangular parallelepiped : "
         << setw(10) << surfaceArea << " square units" << endl;

    return 0;
}

// Function definitions
void getDimensions(double &length, double &width, double &height) {
    //user input for length
    cout << "Enter Length: ";
    cin >> length;
    //user input for width
    cout << "Enter Width:  ";
    cin >> width;
    //user input for height
    cout << "Enter Height: ";
    cin >> height;
}

double calc(double length, double width, double height, double &surfaceArea) {
    //Volume = l x w x h
    double volume = length * width * height;
    //Surface Area = 2(l×h) + 2(l×w) + 2(h×w)
    surfaceArea = 2 * (length * height) + 2 * (length * width) + 2 * (height * width);
    return volume;
}
