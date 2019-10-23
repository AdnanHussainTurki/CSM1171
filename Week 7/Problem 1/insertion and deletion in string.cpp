#include <iostream>
#include <string>

using namespace std;



main() {
    string mainstring;
    puts("Enter main string: ");
    getline(cin,mainstring);

    string insertionString;
    puts("Enter insertion string: ");
    getline(cin,insertionString);

    int index;
    puts("Enter the point of insertion: ");
    cin >> index;

    string inserted = mainstring.insert(index, insertionString);
    puts("\n\n\nInserted String: ");
    cout << inserted;
    cout << endl << endl;

    string deletion = mainstring.erase(index);
    puts("\n\n\nDeleted String: ");
    cout << deletion;
    cout << endl << endl;
    
}