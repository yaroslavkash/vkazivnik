#include <iostream>
using namespace std;

/*int main() {
    int a, b;

    cout << "two numbers: ";
    cin >> a >> b;

    int* A = &a;
    int* B = &b;

    if (*A > *B) {
        cout << "larger number is: " << *A << " - first one" << endl;
    }
    else {
        cout << "larger number is: " << *B << " - second one" << endl;
    }

    return 0;
} 

TASK 2!!!
int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    int* A = &a;

    if (*A > 0) {
        cout << "The number " << *A << " is positive" << endl;
    }
    else if (*A == 0) {
        cout << "The number " << *A << " is equal to zero" << endl;
    }
    else {
        cout << "The number " << *A << " is negative" << endl;
    }

    return 0;
}
TASK 3!!!
int main() {
    int a, b;

    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;

    cout << "before: a = " << a << " , b = " << b << endl;

    int* A = &a;
    int* B = &b;

    int change = *A;
    *A = *B;
    *B = change;

    cout << "after: a = " << a << ", b = " << b << endl;

    return 0;
}
TASK 4!!!
int main() {
    int a, b;
    char operation;

    cout << "first number: ";
    cin >> a;

    cout << "second number: ";
    cin >> b;

    cout << "operation (+, -, *, /): ";
    cin >> operation;

    int* A = &a;
    int* B = &b;

    int result;

    // Виконання операції за допомогою покажчиків
    if (operation == '+') {
        result = *A + *B;
    }
    else if (operation == '-') {
        result = *A - *B;
    }
    else if (operation == '*') {
        result = *A * *B;
    }
    else if (operation == '/') {
        if (*B != 0) {
            result = *A / *B;
        }
        else {
            cout << "error: zero!" << endl;
            return 1;
        }
    }

    cout << "result: " << result << endl;
    return 0;
}*/