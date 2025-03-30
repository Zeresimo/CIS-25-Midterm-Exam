#include <iostream>
using namespace std;

int main()
{
    float num1, num2; // Variables to store the two numbers
    char operation; // Variable to store the operation
    cout << "Enter two numbers: "; // Prompt the user to enter two numbers
    cin >> num1 >> num2; // Read the numbers from the user
    cout << "Enter an operation (+, -, *, /): "; // Prompt the user to enter an operation
    cin >> operation; // Read the operation from the user

    switch (operation) // Switch statement for different operations
    {
        case '+': // Addition
            cout << "Result: " << num1 + num2 << endl; // Output the result of addition
            break; // Exit the switch statement

        case '-': // Subtraction    
            cout << "Result: " << num1 - num2 << endl; // Output the result of subtraction
            break; // Exit the switch statement

        case '*': // Multiplication
            cout << "Result: " << num1 * num2 << endl; // Output the result of multiplication
            break; // Exit the switch statement

        case '/': // Division   
            if (num2 != 0) // Check if the second number is not zero to avoid division by zero
            {
                cout << "Result: " << num1 / num2 << endl; // Output the result of division
            }
            else // If the second number is zero
            {
                cout << "Error: Division by zero!" << endl; // Output an error message
            }
            break; // Exit the switch statement

        default: // If the operation is not recognized
            cout << "Error: Invalid operation!" << endl; // Output an error message
            break; // Exit the switch statement
    }

    return 0;
    
}