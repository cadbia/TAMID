#include "Calculator.h"

double Calculator::add(double a, double b) {
    return a + b;  // Returns the sum of a and b
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw "Division by zero error";  // Throws an error if dividing by zero
    }
    return a / b;
}

int Calculator::modulo(int a, int b) {
    if (b == 0) {
        throw "Modulo by zero error";  // Throws an error if modulo by zero
    }
    return a % b;
}
