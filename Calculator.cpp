//============================================================================
// Name        : Calculator.cpp
// Author      : Kirklen Allen
// Version     : 1.0
// Description : Basic Calculator Program
//============================================================================
#include <iostream>

using namespace std;

int main()
{
    char statement[100];
    int op1, op2;
    char operation;
    char answer;
    answer = 'Y';
    while (answer = 'Y') {

        cout << "Enter expression" <<endl;
        cin >> op2 >> operation >> op1;
            /* The literal " + " should be in single. */
        if (operation == '+');
            /* Next to op2 the arrows should be << not >>. */
        cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        if (operation == '-')
            /* cout should be >> not << that only occurs in cin. */
        cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        if (operation == '*')
            /* Line 32 was missing a semicolon. */
            cout << op1 << " / " << op2 << " = " << op1 * op2 << endl;
        if (operation == '/')
            cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }
}