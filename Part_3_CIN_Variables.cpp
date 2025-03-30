#include <iostream>
#include <string> // Include string library for string operations
using namespace std;

int main()
{
    int i = 0; // initialize int variable
    float j = 0.2; // Initialize float variable
    char c = 'L'; // Initialize char variable
    string arr[3]; // Declare and Initialize an array of strings to hold information
    cout << "Hello, please enter your name, age, and favorite number (Separated by enter): " << endl; // Prompt user for input

    for (int i =0; i < 3; i++) // Loop to get user input
    {
        cin >> arr[i]; // Input values into the array
    }

    // Print the values of the array of strings
    cout << "Information provided: " << endl;
    cout << "Name: " << arr[0] << endl; // Output name
    cout << "Age: " << arr[1] << endl; // Output age
    cout << "Favorite number: " << arr[2] << endl; // Output favorite number

    // Print the values of i, j, and c
    cout << "i: " << i << endl; 
    cout << "j: " << j << endl; 
    cout << "c: " << c << endl; 

}