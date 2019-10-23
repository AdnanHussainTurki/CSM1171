#include <iostream>
#include <string>

using namespace std;

size_t finder(string main, string needle) {
    size_t  found = main.rfind(needle);
    return found;
}

main() {
    string S;
    puts("Enter main string: ");
    getline(cin,S);

    string T;
    puts("Enter needle string: ");
    getline(cin,T);

    // int count = 0;
    int index = S.find(T);
    if (index == -1)
    {
        puts("No Occurence.");

        puts("1");
    } else {
        puts("Occurence of needle in main string are at: ");
        cout<< index;
    }
    
}