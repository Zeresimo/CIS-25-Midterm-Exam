#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: "; // Prompt the user to enter three numbers
    cin >> a >> b >> c; // Read the numbers from the user

    if (a > b && a > c) // Check if 'a' is greater than both 'b' and 'c'
    {
        cout << "The largest number is: " << a << endl;
    }
    else if (b > a && b > c) // Check if 'b' is greater than both 'a' and 'c'
    {
        cout << "The largest number is: " << b << endl;
    }
    else // If neither 'a' nor 'b' is the largest, then 'c' must be the largest
    {
        cout << "The largest number is: " << c << endl;
    }

    return 0;
}