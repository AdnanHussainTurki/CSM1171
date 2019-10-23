/*
* @Author: Adnan
* @Date:   2019-09-16 07:55:45
* @Last Modified by:   Adnan
* @Last Modified time: 2019-10-23 22:52:57
*/
#include <iostream>

using namespace std;

// Method 1

int main() {
    cout << "PROGRAM: GENERATING FIBONACCI SEQUENCE";
    cout << "\n";
    cout << "=========================================================";

    int inputOne;
    cout << "\nEnter the integer for which you want to generate fibonacci sequence: ";
    cin >> inputOne ;

    int lastTerm = 1;
    int secondLastTerm = 0;

    // Printing fibonacci series
    cout << "\n\n";
    cout << "0, 1, ";
    for (int i = 2; i < inputOne; ++i)
    {
        int thisTerm = lastTerm + secondLastTerm;
        cout << thisTerm << ", ";
        // cout << "\n\nAdding " << secondLastTerm << " + " << lastTerm << " = " << thisTerm << ", ";
        secondLastTerm = lastTerm;
        lastTerm = thisTerm;
    }
    cout << "\n\n";
    
    return 0;
}