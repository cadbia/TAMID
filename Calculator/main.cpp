#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    char operation;
    double num1, num2;
    string input;

    cout << "Welcome to the TAMID Calculator!\n";

    // Main loop that continues until the user decides to exit.
    while (true) {
        cout << "\nWould you like to calculate something (y/n): ";
        cin >> input;

        // Exit the loop if the user inputs 'n'.
        if (input == "n") break;
        // Re-prompt if the input is not 'y' or 'n'.
        if (input != "y") {
            cout << "Invalid input. Please enter 'y' to continue or 'n' to exit." << endl;
            continue;
        }

        // Prompt for and validate the first number.
        cout << "Please enter the first number: ";
        while (!(cin >> num1)) {
            cout << "Invalid number. Please enter a valid number: ";
            cin.clear(); // Clear the error flag on cin.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the current line to prevent infinite loop
        }

        // Prompt for and validate the second number.
        cout << "Please enter the second number: ";
        while (!(cin >> num2)) {
            cout << "Invalid number. Please enter a valid number: ";
            cin.clear(); // Clear the error flag on cin.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the current line to prevent infinite loop
        }

        // Loop to ensure a valid operation is entered by the user.
        bool validOperation = false;
        while (!validOperation) {
            cout << "Please enter your function (+, -, *, /, %): ";
            cin >> operation;

            // Check if the operation is valid.
            if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%') {
                validOperation = true;
            } else {
                cout << "Invalid operation! Please enter one of the following: +, -, *, /, %" << endl;
            }
        }

        double result;
        // Determine the operation to perform based on the user's input.
        if (operation == '+') {
            result = Calculator::add(num1, num2);
        } else if (operation == '-') {
            result = Calculator::subtract(num1, num2);
        } else if (operation == '*') {
            result = Calculator::multiply(num1, num2);
        } else if (operation == '/') {
            result = Calculator::divide(num1, num2);
        } else if (operation == '%') {
            result = Calculator::modulo(static_cast<int>(num1), static_cast<int>(num2)); //Cast to int to handle modulo

        cout << "Your result was: " << result << "!" << endl; // Output the result.
    }

    cout << "\nThanks for coming!" << endl;

    return 0;
}
