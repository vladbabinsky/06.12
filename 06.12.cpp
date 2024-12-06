#include <iostream>
using namespace std;

// Task 1
void findMax(int* a, int* b) {
    if (*a > *b) {
        cout << "The largest number: " << *a << endl;
    }
    else {
        cout << "The largest number: " << *b << endl;
    }
}

// Task 2
void determineSign(int* num) {
    if (*num > 0) {
        cout << "The number is positive." << endl;
    }
    else if (*num < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }
}

// Task 3
void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Task 4
void calculator(int* a, int* b, char* op) {
    switch (*op) {
    case '+':
        cout << "Result: " << (*a + *b) << endl;
        break;
    case '-':
        cout << "Result: " << (*a - *b) << endl;
        break;
    case '*':
        cout << "Result: " << (*a * *b) << endl;
        break;
    case '/':
        if (*b != 0) {
            cout << "Result: " << (*a / *b) << endl;
        }
        else {
            cout << "Error: Division by zero!" << endl;
        }
        break;
    default:
        cout << "Invalid operator!" << endl;
    }
}

int main() {
    int choice;
    cout << "Choose a task (1-4):\n";
    cout << "1 - Find the largest of two numbers\n";
    cout << "2 - Determine the sign of a number\n";
    cout << "3 - Swap the values of two numbers\n";
    cout << "4 - Simple calculator\n";
    cin >> choice;

    if (choice == 1) {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        findMax(&num1, &num2);
    }
    else if (choice == 2) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        determineSign(&num);
    }
    else if (choice == 3) {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
        swapValues(&num1, &num2);
        cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
    else if (choice == 4) {
        int num1, num2;
        char operation;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;
        calculator(&num1, &num2, &operation);
    }
    else {
        cout << "Invalid choice!" << endl;
}