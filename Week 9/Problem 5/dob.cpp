#include <iostream>

using namespace std;
/**
 * @Author: Adnan Hussain Turki
 * @Website: www.myphpnotes.com
 * @Email Address: 
=====================================
 * @Creation Time:   2019-11-12 22:27:44
 * @Last Modified by:   Adnan Hussain Turki
 * @Last Modified time: 2019-11-12 22:48:49
=====================================
   PROPERTY OF WWW.MYPHPNOTES.COM
 */
struct DOB {
    int day, month, year;
}; 
struct Person {
    char name[100];
    struct DOB dob;
};
 


main() {
    Person p1;

    puts("Enter the person's name: ");
    cin.getline(p1.name,100);

    puts("Enter the date of birth in DD/MM/YYYY order: ");
    cin >> p1.dob.day >> p1.dob.month >> p1.dob.year;


    cout << (endl);
    cout << (endl);
    cout << (endl);

    puts("Person's Name:");
    puts(p1.name);
    puts("Person's DOB:");
    cout << p1.dob.day  << "/" << p1.dob.month << "/" <<  p1.dob.year ;

    cout << (endl);
    cout << (endl);
}