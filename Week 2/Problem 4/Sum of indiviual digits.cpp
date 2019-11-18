#include <iostream>
#include <math.h>
using namespace std;


int main() {
	cout << "PROGRAM: SUM OF INDIVIUAL DIGITS";
	cout << "\n";
	cout << "=========================================================";
	int inputOne;
	
	cout << "\nEnter Three digit number:";
	cin >> inputOne ;
	int number = inputOne;
    int total = 0;
    int numberOfDigits = 0;
	while (number > 0 ) {
        number = number/10;
        numberOfDigits++;
    }

    int cursorNumber = inputOne;
    for (int i = (numberOfDigits - 1); i >= 0; i--) {
        int divisor = pow(10, i);
        int farMostDigit = (cursorNumber/divisor);
        total += farMostDigit;
        cursorNumber = cursorNumber - (farMostDigit * divisor);
    }
    cout << "The sum of digits of number " << inputOne << " : " << total;

	return 0;
}

