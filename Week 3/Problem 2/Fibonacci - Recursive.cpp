/*
* @Author: Adnan
* @Date:   2019-09-16 07:55:45
* @Last Modified by:   Adnan
* @Last Modified time: 2019-10-23 22:52:57
*/
#include <iostream>

using namespace std;

long fib(int n) {
    if (n==1 || n==2)
    {
        return (n-1);
    }
    return (fib(n-1) + fib(n-2));
}

// Method 1
int main() {
    cout << "PROGRAM: GENERATING FIBONACCI SEQUENCE";
    cout << "\n";
    cout << "=========================================================";

    int inputOne;
    cout << "\nEnter the integer for which you want to generate fibonacci sequence: ";
    cin >> inputOne ;


    // Printing fibonacci series
    cout << "\n\n";
    for (int i = 1; i <= inputOne; ++i)
    {
        cout << fib(i) << ", ";
    }
    cout << "\n\n";
    
    return 0;
}