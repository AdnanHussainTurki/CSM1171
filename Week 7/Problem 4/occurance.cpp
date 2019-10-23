#include <iostream>
#include <string>

using namespace std;

size_t finder(string main, string needle) {
    size_t  found = main.rfind(needle);
    return found;
}

main() {
    string mainstring;
    puts("Enter main string: ");
    getline(cin,mainstring);

    string needle;
    puts("Enter needle string: ");
    getline(cin,needle);

    int count = 0;

    while(finder(mainstring, needle) != string::npos) {
        mainstring.replace(mainstring.find(needle), needle.length(), "");
        count++;
    }

    puts("Occurence of needle in main string is");
    cout << count;
    
}