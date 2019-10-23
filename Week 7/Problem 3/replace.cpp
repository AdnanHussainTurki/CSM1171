#include <iostream>
#include <string>

using namespace std;



main() {
    string mainstring;
    puts("Enter main string: ");
    getline(cin,mainstring);

    string needle;
    puts("Enter needle string: ");
    getline(cin,needle);

    string replacement;
    puts("Enter replacement string: ");
    getline(cin,replacement);

   mainstring.replace(mainstring.find(needle), needle.length(), replacement);
   puts("Replaced String:"); 
   cout << mainstring;
    
}