#include <iostream>
#include <iomanip>
using namespace std;

//The weight of water must be declared as a pound defined global constant
const double WEIGHT_OF_WATER = 62.42796; 

int main()
{
    double len, 
    wid, 
    dep, 
    vol, 
    weight;
    //user input for length
    cout << "Enter length (ft): ";
    cin >> len;
    //uer input for width
    cout << "Enter width (ft): ";
    cin >> wid;
    //user input for depth
    cout << "Enter depth (ft): ";
    cin >> dep;
   //Volume is the length times the width times the depth
    vol = len * wid * dep;
    //multiply this by the weight of a cubic foot of water.
    weight = vol * WEIGHT_OF_WATER;
    //output must be one digit to the right of the decimal point.
    cout << fixed << setprecision(1);
    cout << "Weight: " << weight << " pounds" << endl;

    return 0;
}
