// P1 Mini Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    //Establish the integers: number 1 and number 2
    int num1, num2;
    char op;
    //Establish user input
    cout << "Enter the operator for this simple equation; choices: +, -, *, /: ";
    cin >> op;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    //Switch is an alternative to the if-else statement
    switch (op) {
        //Case is basically in CASE if the user puts '(selected operator)', this is the established formula
    case '+':
        cout << num1 << " " << op << " " << num2 << " " << "=" << " " << num1 + num2 << endl; break;
        //For example: IN CASE if the user puts '-', this is the formula we (the program) follow
    case '-':
        cout << num1 << " " << op << " " << num2 << " " << "=" << " " << num1 - num2 << endl; break;
    case '*':
        cout << num1 << " " << op << " " << num2 << " " << "=" << " " << num1 * num2 << endl; break;
    case '/':
        if (num2 == 0) {
            cout << "Error: Division by zero is undefined." << endl;
        }
        else {
            cout << num1 << "/" << op << " " << num2 << " " << "=" << " " << num1 / num2 << endl;
        }
        break;
    default:
        cout << "Error: Unsupported Operator!" << endl;
    }

    return 0;
}