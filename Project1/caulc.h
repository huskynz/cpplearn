#ifndef CAULC_H
#define CAULC_H

#include <iostream>
using namespace std;

inline void cal() { // Assuming void return type
    int x, y;
    int sum;
    int operation;

    cout << R"(
HuskyNZ's Simple C++ Calculator                                                                                                                                                                                                                                                                                                                                                                                                                                     
)" << '\n';

    cout << "What operation would you like to perform? (1: add, 2: sub, 3: mul, 4: div): ";
    cin >> operation;

    if (operation == 1) {
        cout << "Type a number: ";
        cin >> x;
        cout << "Type another number: ";
        cin >> y;
        sum = x + y;
        cout << "Answer is: " << sum;
    }
    else if (operation == 2) {
        cout << "Type a number: ";
        cin >> x;
        cout << "Type another number: ";
        cin >> y;
        sum = x - y;
        cout << "Answer is: " << sum;
    }
    else if (operation == 3) {
        cout << "Type a number: ";
        cin >> x;
        cout << "Type another number: ";
        cin >> y;
        sum = x * y;
        cout << "Answer is: " << sum;
    }
    else if (operation == 4) {
        cout << "Type a number: ";
        cin >> x;
        cout << "Type another number: ";
        cin >> y;
        if (y != 0) {
            sum = x / y;
            cout << "Answer is: " << sum;
        }
        else {
            cout << "Error! Division by zero.";
        }
    }
    else {
        cout << "Invalid operation choice!";
    }
}

#endif CAULC_H
