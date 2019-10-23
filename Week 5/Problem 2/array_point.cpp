#include <iostream>

using namespace std;

main() {
    cout<<"Program: Write a program for reading elements using pointer into array and display the values using array.";
    cout<<endl;
    cout<<"===========================================================================================================";
    cout<<endl;
    
    int a[100]  = {0,1,2,3,4,5,6,7,8,9};
    int *pointer;
    pointer = a;

    for (int i = 0; i < 10; ++i)
    {
        cout<<"\n\nA[" << i << "] = " << pointer[i];
    }
}