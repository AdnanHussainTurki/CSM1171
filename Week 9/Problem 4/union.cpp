/**
 * @Author: Adnan Hussain Turki
 * @Website: www.myphpnotes.com
 * @Email Address: 
=====================================
 * @Creation Time:   2019-11-12 19:40:29
 * @Last Modified by:   Adnan Hussain Turki
 * @Last Modified time: 2019-11-12 22:26:57
=====================================
   PROPERTY OF WWW.MYPHPNOTES.COM
 */
#include <iostream>

using namespace std;


/* Union
Union is similar to a structure in terms of declaration and usage but all the members of a union occupy the same space in memory 
i.e, memory location is shared among the union members. The size of the union is that of the greatest member in terms of size. 
Since all the members of a union share the same memory space, modification of one member affects other. 
The value of one member gets overwritten by the value of other member. 
*/


union Person {
    char name[200];
    char city[200];
    char home_address[200];
    char hostel_address[200];
    int zip;
    char state[200];
};

main() {
    Person person; 


    puts("Enter the person's name: ");
    cin.getline( person.name, 150);
    string personName = person.name;


    puts("Enter the home address: ");
    cin.getline( person.home_address, 150);
    string personHomeAddress = person.home_address;

    puts("Enter the hostel address: ");
    cin.getline( person.hostel_address, 150);
    string personHostelAddress = person.hostel_address;

    puts("Enter the city: ");
    cin.getline( person.city, 150);
    string personCity = person.city;


    puts("Enter the state: ");
    cin.getline( person.state, 150);
    string personState = person.state;

   


    puts("Enter the pin code: ");
    cin>>person.zip;
    int personZip = person.zip;




    cout << endl << endl;
    cout << endl;
    cout << (personName);
    cout << endl;
    cout << (personHomeAddress);
    cout << endl;
    cout << (personHostelAddress);
    cout << endl;
    cout << (personCity);
    cout << endl;
    cout << (personState);
    cout << ", " << personZip;

}