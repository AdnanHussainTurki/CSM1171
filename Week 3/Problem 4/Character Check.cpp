/**
 * @Author: Adnan Hussain Turki
 * @Website: www.myphpnotes.com
 * @Email Address: 
=====================================
 * @Creation Time:   2019-09-16 07:55:45
 * @Last Modified by:   Adnan
 * @Last Modified time: 2019-10-23 23:11:17
=====================================
   PROPERTY OF WWW.MYPHPNOTES.COM
 */

#include <iostream>

using namespace std;

// Method 1

int main() {
    cout << "PROGRAM: CHECK TYPE OF CHARACTOR";
    cout << "\n";
    cout << "=========================================================";

    char inputOne;
    cout << "\nEnter the charactor: ";
    cin >> inputOne ;

    int ascii = inputOne;
    // cout << "ASCII equivalent " << inputOne << " :" << ascii;

    if ((ascii >= 0 && ascii <= 47) || (ascii >= 58 && ascii <= 64) || (ascii >= 91 && ascii <= 96) || (ascii >= 123 && ascii <= 127))
    {
        cout << "\n\nCHARACTOR TYPE: SYMBOL";
    } else if(ascii >= 65 && ascii <= 90) {
        cout << "\n\nCHARACTOR TYPE: CAPITAL ALPHABET";
    } else if(ascii >= 97 && ascii <= 122) {
        cout << "\n\nCHARACTOR TYPE: SMALL ALPHABET";
    } else if(ascii >= 48 && ascii <= 57) {
        cout << "\n\nCHARACTOR TYPE: NUMBER (0-9)";
    } else {
        cout << "\n\nCANNOT CALCULATE CHARACTOR TYPE";
    }
    
    cout << "\n";
    cout << "\n";
 
    return 0;
}