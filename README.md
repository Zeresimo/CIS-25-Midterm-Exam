# CIS 25 Midterm Exam
 Multiple files, each with different functions for my CIS 25 Midterms

## Part 1: Functions
 **CalculateArea** is a function that takes in two float parameters and returns the area of a rectangle in a float data type.

 **isPrime** is a boolean type function that takes in an integer.
 This integer is checked if it is greater than 1, as by definition, a prime number is a natural number greater than 1. This also checks the possible factors from 2 until square root of the given number because once it is greater than said square root, the factors will just repeat but in reverse. If divisible at any point within that range, it is not a prime number.

 ## Part 2 Loops and Arrays
A loop that prints out all even number from 1-50, starting from 2 and ending at 50 by incrementing by 2 at a time.

An integer array with multiple input from user using a while loop that stops when the array is full by incrementing 1 each time until the size of the array is equal to the counter, then printing using a for loop using the size of the array as the end.

## Part 3 CIN and Variables
- initialized a string array that takes in multiple inputs through a loop for name, age, and favorite number, then printed in a formatted way through multiple couts
- declared, initialized, and printed different data types (int, float, char)

## Part 4 Logical Operators and IF Statements
- Task 1: Takes three inputs from user then compares with the other two using if and else if statements, one number at a time.
- Task 2: Takes a year and checks if said year is divisible y 4 or 400, it is a leap year. Else, it is not a leap year.

## Part 5 Switch Case
- Initialized a char variable for operations, two float variables for numbers that will be taken from input by user.
- Depending on the operation typed in by the user, different operations will be done.
- Error checking is done for dividing by 0, which results in an error, and the prgoram exiting.

## Part 6 Debugging
- Changed if statement argument by adding an '=' as what it originally does is initialize the variable to be 20 which would result in an error.
- Removed ';' from the end of the for loop as it ends the for loop prematurely.
- Program now checks the variable if it is 20, then prints out 0 to 5 as intended.