/**
 * @Author: Adnan Hussain Turki
 * @Website: www.myphpnotes.com
 * @Email Address: 
=====================================
 * @Creation Time:   2019-11-13 00:37:17
 * @Last Modified by:   Adnan Hussain Turki
 * @Last Modified time: 2019-11-13 02:41:43
=====================================
   PROPERTY OF WWW.MYPHPNOTES.COM
 */
#include <iostream>
#include <math.h>

using namespace std;

long binary(int decimal) {
    if (decimal == 0)
    {
        return 0;
    }
    int i = 0;
    long binary = 0;
    while(decimal > 0) {
        binary += (decimal%2) * pow(10, i);
        decimal = decimal/2;
        i++;
    }
    return binary;
}
long octal(int decimal) {
    if (decimal == 0)
    {
        return 0;
    }
    int i = 0;
    long octal = 0;
    while(decimal > 0) {
        octal += (decimal%8) * pow(10, i);
        decimal = decimal/8;
        i++;
    }
    return octal;
}

char* hexadecimal(int decimal, char *hexa) {
    if (decimal == 0)
    {
        return 0;
    }
    char hexaTemp[500];
    int i = 0;
    while(decimal > 0) {
        int temp = 0;
        temp = (decimal%16);
        if(temp < 10) 
        { 
            hexaTemp[i] = temp + 48; 
        } 
        else
        { 
            hexaTemp[i] = temp + 55; 
        } 
        decimal = decimal/16;
        
        i++;
    }
    

    // Reversing the array
    int k = 0;
    for (int j = (i-1); j >= 0 ; --j)
    {
        hexa[k] = hexaTemp[j];
        k++;
    }
    // Adding null character
    hexa[k] = '\0';
    return hexa;
}

main() {
    int number;
    puts("Enter a number: ");
    cin >> number;
    cout << endl;
  
    cout << endl;
    int exit = 0;
    do {
        puts("Select the conversion to perform: ");
        puts("=================================");
        puts("1. Binary");
        puts("2. Octal");
        puts("3. Hexadecimal");
        puts("0. Exit");
        puts("Enter the number of operation: ");
        int choice;
        cin >> choice;
        switch(choice) {
            case 1: 
                cout << (endl) << endl;
                puts("Binary equivalent of the number: ");
                cout <<  (binary(number));
                cout <<(endl) << endl;
                break;
            case 2: 
                cout << (endl) << endl;
                puts("Octal equivalent of the number: ");
                cout << (octal(number));
                cout <<(endl) << endl;
                break;
            case 3: 
                
                cout << (endl) << endl;
                puts("Hexadecimal equivalent of the number: ");
                char hexa[500];
                hexadecimal(number, hexa);
                puts(hexa);
                cout <<(endl) << endl;
                break;
            case 0: 
                exit = 1;
                break;
        }
        
    } while (exit == 0);
}