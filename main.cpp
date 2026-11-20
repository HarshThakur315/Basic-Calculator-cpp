#include <iostream>
#include <limits>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    char again;

    do {
        cout << "\n=================================\n";
        cout << "       BASIC CALCULATOR\n";
        cout << "=================================\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exit\n";
        cout << "Choose an operation (1-5): ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            return 1;
        }

        if (choice == 5) {
            cout << "Thank you for using the calculator!\n";
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please select 1 to 5.\n";
            continue;
        }

        cout << "Enter first number: ";
        if (!(cin >> num1)) {
            cout << "Invalid number input.\n";
            return 1;
        }

        cout << "Enter second number: ";
        if (!(cin >> num2)) {
            cout << "Invalid number input.\n";
            return 1;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << '\n';
                break;
            case 2:
                cout << "Result: " << num1 - num2 << '\n';
                break;
            case 3:
                cout << "Result: " << num1 * num2 << '\n';
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    cout << "Result: " << num1 / num2 << '\n';
                }
                break;
        }

        cout << "Do another calculation? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    cout << "Calculator closed.\n";
    return 0;
}
