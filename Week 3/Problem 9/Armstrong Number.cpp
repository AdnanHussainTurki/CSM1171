#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "PROGRAM: CHECK WHETHER NUMBER IS ARMSTRONG OR NOT";
    cout << "\n";
    cout << "=========================================================";

    int inputOne;
    cout << "\nEnter the number: ";
    cin >> inputOne ;

    int number = inputOne;
    int total = 0;
    int armTotal = 0;
    int numberOfDigits = 0;
    while (number > 0 ) {
        number = number/10;
        numberOfDigits++;
    }

    int cursorNumber = inputOne;
    for (int i = (numberOfDigits - 1); i >= 0; i--) {
        int divisor = pow(10, i);
        int farMostDigit = (cursorNumber/divisor);
        total += (farMostDigit);
        armTotal += pow(farMostDigit, 3);
        cursorNumber = cursorNumber - (farMostDigit * divisor);
    }
    cout << "\n\n";
    cout << "GIVEN NUMBER: "  << inputOne ;
    cout << "\n";
    cout << "NUMBER OF DIGITS: "  << numberOfDigits ;
    cout << "\n";
    cout << "SUM OF DIGITS: "  << total ;
    cout << "\n";
    cout << "SUM OF CUBES OF ITS DIGITS: "  << armTotal ;
    cout << "\n";
    cout << "AS THE SUM OF CUBES OF ITS DIGITS IS " << ((armTotal == inputOne) ? "EQUAL" : "NOT EQUAL") 
         << " TO THE NUMBER " << inputOne << " ITSELF.";
    cout << "\n";
    cout << "THAT MEANS, THE NUMBER " << inputOne << " IS " << ((armTotal == inputOne) ? "" : "NOT ") 
         << " AN ARMSTRONG NUMBER.";
    cout << "\n\n";
    return 0;
}