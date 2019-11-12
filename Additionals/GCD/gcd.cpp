/*
* @Author: Adnan
* @Date:   2019-09-16 07:55:45
* @Last Modified by:   Adnan
* @Last Modified time: 2019-10-23 22:52:57
*/
#include <iostream>

using namespace std;


int gcd(int a,int b){
    if((a%b)==0) {
        return b;
    }
    // cout << a << " =  " << b << "*q" << "+" << a%b << endl;
    return (gcd(b,a%b));
}

// Method 1
int main() {
    cout << "PROGRAM: FINDING GCD";
    cout << "\n";
    cout << "=========================================================";

    int inputOne;
    cout << "\nEnter the first integer : ";
    cin >> inputOne ;


    int inputTwo;
    cout << "\nEnter the second integer : ";
    cin >> inputTwo ;

    // Printing GCD
    puts("GCD of given two integers is: ");
    cout << gcd(inputOne, inputTwo);
    
    return 0;
}