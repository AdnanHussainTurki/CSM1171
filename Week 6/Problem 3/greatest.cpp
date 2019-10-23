#include <iostream>

using namespace std;

class CompareMe
{
protected:
    int first, second;
public:
    CompareMe(int first, int second ) {
        this->first = first;
        this->second = second;
    }    
    ~CompareMe() {
    }

    int compare() {
        if (this->first > this->second)
        {
            return this->first;
        } else {
            return this->second;
        }
    }
    
};

main() {
    puts("\n\nEnter the first number: ");
    int first;
    cin >> first;
    cin.ignore();
    
    puts("\n\nEnter the second number: ");
    int second;
    cin >> second;
    cin.ignore();    

    CompareMe c = CompareMe(first, second);
    int greater = c.compare();

    cout << endl << endl << "Greater out of " << first << " and " << second  << " is " << greater << endl << endl;


}