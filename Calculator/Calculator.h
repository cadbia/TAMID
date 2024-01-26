#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    static double add(double a, double b);         // Adds two numbers
    static double subtract(double a, double b);    // Subtracts the second number from the first
    static double multiply(double a, double b);    // Multiplies two numbers
    static double divide(double a, double b);      // Divides the first number by the second
    static int modulo(int a, int b);               // Calculates the modulo of two numbers
};

#endif // CALCULATOR_H
