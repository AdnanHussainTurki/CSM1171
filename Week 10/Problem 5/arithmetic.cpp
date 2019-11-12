#include <iostream>

using namespace std;

float add(float a, float b) {
    return a + b;
}
float substract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    return a / b;
}
float modulas(float a, float b) {
    return int(a) % int(b);
}

int main() {
    cout << "PROGRAM: USE OPERANDS AND OPERATOR";
    cout << "\n";
    cout << "=========================================================";

    float inputOne;
    cout << "\nEnter the first integer: ";
    cin >> inputOne ;

    float inputTwo;
    cout << "\nEnter the second integer: ";
    cin >> inputTwo ;    

    

    int exit = 0;
    do {
        char op [1];
        cout << "\nEnter the operation you wish to do on given integer : \n";
        puts("+. Addition");
        puts("-. Substraction");
        puts("*. Multiplication");
        puts("/. Division");
        puts("%. Modulas");
        puts("!. Exit");
        puts("Press your operation: ");
        cin >> op[0] ;
        float result = '`';
        switch (op[0]) {
            case '+':
                cout << "\nADDING \n";
                result = add(inputOne, inputTwo);
                break;
            case '-':
                cout << "\nSUBSTRACTING \n";

                result = substract(inputOne, inputTwo);
                break;
            case '*':
                cout << "\nMULTIPLYING \n";

                result = multiply(inputOne, inputTwo);
                break;
            case '/':
                cout << "\nDIVIDING \n";

                result = divide(inputOne, inputTwo);
                break;
            case '%':
                cout << "\nMODULAS \n";

                result = modulas(inputOne, inputTwo);
                break;
            case '!':
                exit = 1;

                break;    
            default:
                puts("UNSUPPORTED OPERATOR!");
                puts("Try Again!");
                break;
        } 
        if (result != '`')
        {
            cout << inputOne << "  " << op[0] << " " << inputTwo << "  =  " << result;
            cout << "\n\n";
        }
        
    

    } while(exit == 0);

    return 1;

    
}