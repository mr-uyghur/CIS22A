#include <iostream>
using namespace std;

int encode(double values[], int numElements);

int main() {
    //priginal arr value {26, 4, 17, 5}
    double arr[] = {26, 4, 17, 5};
    int n = 4;

    int x = encode(arr, n);

    cout << "Modified array: {";
    //user for loop to print out each index value after the encode function has ran
    //include value and the ,
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}
//This function multiplies each element of the array, 
//including the last element of the array, by the value of the last element of the array.
int encode(double values[], int numElements) {
    //set multiplier val to the last index of the arr
    double multiplier = values[numElements - 1];
    for (int i = 0; i < numElements; i++) {
        //with for loop iterate thru the original arr 
        //and times each index value with the last index value
        values[i] *= multiplier;
    }

    return numElements; // return the number of elements in the array
}
