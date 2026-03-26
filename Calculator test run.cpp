// Calculator project
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    char operation;
    char sqrtChoiceX, sqrtChoiceY;

    // Ask the user to select an operation
    cout << "Enter '+' for addition, '-' for subtraction, '*' for multiplication, '/' for division: ";
    cin >> operation;

    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> x;

    // Ask if the user wants to take the square root of the first number
    cout << "Do you want to take the square root of the first number? (y/n): ";
    cin >> sqrtChoiceX;
    if (sqrtChoiceX == 'y' || sqrtChoiceX == 'Y') {
        if (x < 0) {
            cout << "Error: Cannot take the square root of a negative number." << endl;
            return 1;  // Exit program
        }
        x = sqrt(x);  // Apply square root to x
        cout << "Square root applied. New value of first number: " << x << endl;
    }

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> y;

    // Ask if the user wants to take the square root of the second number
    cout << "Do you want to take the square root of the second number? (y/n): ";
    cin >> sqrtChoiceY;
    if (sqrtChoiceY == 'y' || sqrtChoiceY == 'Y') {
        if (y < 0) {
            cout << "Error: Cannot take the square root of a negative number." << endl;
            return 1;  // Exit program
        }
        y = sqrt(y);  // Apply square root to y
    }

    // Perform the chosen operation
    switch (operation) {
        case '+': {
            double sum = x + y;
            cout << "The result of " << x << " + " << y << " is " << sum << "." << endl;
            break;
        }
        case '-': {
            double difference = x - y;
            cout << "The result of " << x << " - " << y << " is " << difference << "." << endl;
            break;
        }
        case '*': {
            double product = x * y;
            cout << "The result of " << x << " * " << y << " is " << product << "." << endl;
            break;
        }
        case '/': {
            if (y == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                double quotient = x / y;
                cout << "The result of " << x << " / " << y << " is " << quotient << "." << endl;
            }
            break;
        }
        default: {
            cout << "Invalid operation selected." << endl;
            break;
        }
    }

    return 0;
}

