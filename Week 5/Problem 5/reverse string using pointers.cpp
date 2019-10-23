#include <iostream>

using namespace std;

char reverse[100];
char* reverseArray(char *a) {
    int totalChars = 0;
    while(a[totalChars] != '\0') {
        totalChars++;
    }

    int i = 0;
    while(a[i] != '\0') {
        reverse[i] = a[totalChars-i-1];
        i++;
    }
    return reverse;
}
main() {
    cout<<"Write a C++ program to reverse a string using pointers.";
    cout<<endl;
    cout<<"==================================================================================================";
    cout<<endl;
    cout<<endl;

    char first[100];
    cout<<"Enter the first string: ";
    gets(first);
    cout<<"Provided String: ";
    puts(first);
    cout<<endl;

    char *rev;
    rev = reverseArray(first);

    cout<<"Reversed String: ";
    puts(rev);

}
