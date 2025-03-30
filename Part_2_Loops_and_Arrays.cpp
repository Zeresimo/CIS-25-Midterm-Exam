#include <iostream>
using namespace std;

int main()
{   
    int i = 0; // Initialize index for array
    int arr[10]; // Declare an array of size 10
    
    for(int j = 2; j <= 50; j+2) // Loops from 2 to 50 incrementing by 2
    {
        cout << j << endl;
    }

    cout << "Enter 10 numbers: " << endl; // Prompt user for input
    while (i != 10)
    {
        cin >> arr[i]; // Input values into the array
        i++; // Increment the index
    }

    for(int k = 0; k < 10; k++) // Loop through the array
    {
        cout << arr[k] << ", "; // Output each element
    }

    return 0;
}