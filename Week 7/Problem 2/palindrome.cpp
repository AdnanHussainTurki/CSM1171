#include <iostream>
#include <string>

using namespace std;

int isPalindrome(string a) {

    int totalChars = 0;
    while(a[totalChars] != '\0') {
        totalChars++;
    }
    int i = 0;

    while(a[i] != '\0') {
        if (a[i] != a[totalChars-i-1])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

main() {
    string mainstring;
    puts("Enter main string: ");
    getline(cin,mainstring);

    cout << endl<< endl;

    if (isPalindrome(mainstring) == 1)
    {
        puts("The string is Palindrome.");
    } else {
        puts("The string is NOT  Palindrome.");
    }
    return 0;
}