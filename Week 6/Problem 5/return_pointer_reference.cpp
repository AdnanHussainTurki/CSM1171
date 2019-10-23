#include <iostream>

using namespace std;

class Example
{
protected:
    int number;
public:
    Example(int number) {
        this->number = number;
    }
    ~Example() {
    }
    int* addressNumber() {
        return &(this->number);        
    }
};

main() {
    puts("\n\nEnter some  number: ");
    int number;
    cin >> number;
    cin.ignore();

    
    Example ex = Example(number);
    int *addressNumber;
    addressNumber = ex.addressNumber();
    cout<< endl<< "Address of "<< *addressNumber << " is " << addressNumber;
    

}