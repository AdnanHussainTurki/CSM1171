/*
* @Author: Adnan
* @Date:   2019-09-16 07:55:45
* @Last Modified by:   Adnan
* @Last Modified time: 2019-10-23 22:56:38
*/
#include <iostream>

using namespace std;

// Method 1

int main() {
    cout << "PROGRAM: GENERATING ALL PRIME FROM 1 TO N";
    cout << "\n";
    cout << "=========================================================";

    int inputOne;
    cout << "\nEnter the integer till which you want to generate prime numbers: ";
    cin >> inputOne ;
    cout << "\n";
    cout << "\n";

    // 1 is not prime because it has only on positive divisor (itself)
    for (int i = 2; i <= inputOne; ++i) {
        // cout << "\n\n========================================\n\n";
        // cout << "Checking primeness of " << i << "\n";
        // Is this prime
        int countFactorOfI = 0;
        // cout << "LOOP COUNTER RUNS FROM " << 1 << " to " << (inputOne) << "\n\n";
        for (int j = 1; j <= (inputOne) ; ++j) {
            // cout << "Dividing  " << i << " by " << j << " and getting remainder: " <<  i%j << "\n\n";
            if (i%j == 0) {
                countFactorOfI++;
            }
        }
        if (countFactorOfI <= 2)
        {
            cout << "\n " << i << " is prime.";
        }
    }

    return 0;
}