/**
 * @Author: Adnan Hussain Turki
 * @Website: www.myphpnotes.com
 * @Email Address: 
=====================================
 * @Creation Time:   2019-09-16 07:55:45
 * @Last Modified by:   Adnan
 * @Last Modified time: 2019-10-23 23:46:28
=====================================
   PROPERTY OF WWW.MYPHPNOTES.COM
 */
#include <iostream>

using namespace std;

int main() {
    cout << "PROGRAM: CHECK PROFIT OR LOSS AND PROVIDE PERCENTAGE";
    cout << "\n";
    cout << "=========================================================";

    int cost;
    cout << "\nEnter the cost price: ";
    cin >> cost ;

    int sale;
    cout << "\nEnter the selling price: ";
    cin >> sale ;
    
    string type;
    if (sale > cost) {
        type = "PROFIT";
    } else if( sale < cost) {
        type = "LOSS";
    } else {
        cout << "\nNEITHER PROFIT NOR LOSS MADE IN THIS TRANSACTION.";
        return 0;
    }
    cout << "\nTRANSACTION IS IN " << type;
    cout << "\nWITH " << type << " PERCENT : ";
    cout << abs(((sale - cost)*100)/cost)<< "%";



    cout << "\n\n";
    return 0;
}