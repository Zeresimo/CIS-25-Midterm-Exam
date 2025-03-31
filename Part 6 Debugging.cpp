#include <iostream> // Added space for clarity
using namespace std;

int main() {
    int number = 10;
    if(number == 20) { // Corrected the condition to check if number is equal to 20
        cout << "Number is 20" << endl;
    } 
    else { // Else statement moved to next line for clarity 
        cout << "Number is not 20" << endl;
    }

    for(int i = 0; i <= 5; i++) // Removed the semicolon ';' after the for loop as it terminates the loop prematurely 
        cout << i << endl; // This is now inside the loop

    return 0;
}
