#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a year: "; // Prompt the user to enter a year
    cin >> n; // Read the year from the user

    // Check if the year is a leap year
    if (n % 4 == 0 || n % 400 == 0) // A year is a leap year if it is divisible by 4 or 400
    {
        cout << n << " is a leap year." << endl; // If true, output that the year is a leap year
    }
    else
    {
        cout << n << " is not a leap year." << endl; 
    }

    return 0;
}