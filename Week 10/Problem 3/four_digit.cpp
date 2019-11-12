/**
 * @Author: Adnan Hussain Turki
 * @Website: www.myphpnotes.com
 * @Email Address: 
=====================================
 * @Creation Time:   2019-11-13 00:37:17
 * @Last Modified by:   Adnan Hussain Turki
 * @Last Modified time: 2019-11-13 01:59:40
=====================================
   PROPERTY OF WWW.MYPHPNOTES.COM
 */
#include <iostream>
#include <math.h>

using namespace std;

int countDigits(int number) {
    if (number == 0) {
        return 0;
    }
    return 1 + countDigits(number/10);
}
int reverse(int number) {
    int i = 0;
    int reversed = 0;
    int cursor = number;
    while(i < countDigits(number)) {
        reversed += int(( int(cursor % (int)(pow(10, i+1))) )  / pow(10, i))  * (int)(pow(10, countDigits(number) - i - 1) ) ;
        // cout << "REVERSED : " << reversed << endl;
        i++;
    }
    return reversed;
}

int sum(int number) {
    if (number == 0) {
        return 0;
    }
    return int(number%10) + int(sum(number/10));
}

void alternateSum(int number, int *sumOne, int *sumTwo) {
    int i = 0;
    int cursor = number;
    while(i < countDigits(number)) {
        int digit = int(( int(cursor % (int)(pow(10, i+1))) )  / pow(10, i))  ;
        // cout << "digit: " << digit << endl;
        if (i%2) {
            *sumOne += digit;
        } else {
            *sumTwo += digit;
        }
        i++;
    }
}

main() {
    int number;
    puts("Enter a four digit number: ");
    cin >> number;
    cout << endl;
    if (countDigits(number) != 4)
    {
        puts("Notice: The given integer have digits not equal to 4. ");
        if (countDigits(number)%2)
        {
            puts("WARNING: Sum of alternate digits will not work as the number contains odd digits.");
        }
    }
    cout << endl;
    int sumO = 0;
    int sumT = 0;
    int exit = 0;
    do {
        puts("Select the operation to perform: ");
        puts("=================================");
        puts("1. Reverse");
        puts("2. Sum of the number");
        if (countDigits(number)%2 == 0)
        {
            puts("3. Sum of alternate digits");
        }
        puts("0. Exit");
        puts("Enter the number of operation: ");
        int choice;
        cin >> choice;
        switch(choice) {
            case 1: 
                cout << (endl) << endl;
                puts("Reverse of the number: ");
                cout << (reverse(number));
                cout <<(endl) << endl;
                break;
            case 2: 
                cout << (endl) << endl;
                puts("SUM of the number: ");
                cout << (sum(number));
                cout <<(endl) << endl;
                break;
            case 3: 
                
                cout << (endl) << endl;
                puts("SUM of digits the number: ");
                
                alternateSum(number, &sumO, &sumT);
                cout << "Sum One: " << sumO << endl;
                cout << "Sum Two: " << sumT << endl;
                cout <<(endl) << endl;
                break;
            case 0: 
                exit = 1;
                break;
        }
        
    } while (exit == 0);
}