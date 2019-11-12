#include <iostream>

using namespace std;

int main() {
    cout << "PROGRAM: USE OPERANDS AND OPERATOR";
    cout << "\n";
    cout << "=========================================================";

    int inputOne;
    cout << "\nEnter the first integer: ";
    cin >> inputOne ;

    int inputTwo;
    cout << "\nEnter the second integer: ";
    cin >> inputTwo ;    

    char op [1];
    cout << "\nEnter the operation you wish to do on given integer : ";
    cin >> op[0] ;

    

    int result;
    switch (op[0]) {
        case '+':
            cout << "\nADDING \n";
            result = (inputOne + inputTwo);
            break;
        case '-':
            cout << "\nSUBSTRACTING \n";

            result = inputOne - inputTwo;
            break;
        case '*':
            cout << "\nMULTIPLYING \n";

            result = (inputOne * inputTwo);
            break;
        case '/':
            cout << "\nDIVIDING \n";

            result = inputOne / inputTwo;
            break;
        case '%':
            cout << "\nMODULAS \n";

            result = inputOne % inputTwo;
            break;
        default:
            cout<< "UNSUPPORTED OPERATOR!";
            return 0;
            break;
    } 
    cout << inputOne << "  " << op[0] << " " << inputTwo << "  =  " << result;
    cout << "\n\n";
    return 0;
}