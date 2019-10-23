#include <iostream>

using namespace std;
void concatenate(char *a, char *b, char *f) {

    int i =0;
    while(a[i] != '\0') {
        f[i] = a[i];

        i++;
    }

    int j =0;
    while(b[j] != '\0') {
        f[i+j] = b[j];
        j++;
    }
    f[i+j] = '\0';
}
main() {
    cout<<"Program: Concatenate two strings with pointers";
    cout<<endl;
    cout<<"================================================";
    cout<<endl;
    char first[100];
    cout<<"Enter the first string: ";
    gets(first);
    cout<<"First String: ";
    puts(first);
    cout<<endl;

    cout<<endl;
    char second[100];
    cout<<"Enter the second string: ";
    gets(second);
    cout<<"Second String: ";
    puts(second);
    cout<<endl;

    char final[200];
    concatenate(first, second, final);

    cout<<endl;    
    cout<<endl;    
    cout<<"Final String: ";
    puts(final);
    cout<<endl;    
    
}