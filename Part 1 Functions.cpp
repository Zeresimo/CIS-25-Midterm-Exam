#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

// Receives float values for length and width, and returns the area of a rectangle
float calculateArea(float length, float width)
{
    return length * width; // Area = length * width
}

// Checks if given number is a prime number
// “The smallest factor of a number greater than one cannot be greater than the square root of that number.”
bool isPrime(int number)
{
    if (number <= 1) // Prime numbers are greater than 1
        return false;
    for (int i = 2; i <= sqrt(number); i++) // Checks if the number is divisible by any number from 2 to the square root of the number
    {
        if (number % i == 0) // If the number is divisible by i, it is not prime
            return false;
    }
    return true; // If no divisors were found, it is prime
}