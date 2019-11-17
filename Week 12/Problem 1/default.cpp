#include <iostream>

using namespace std;

class Sample
{
protected:
    int a;
public:
    Sample(int a) {
        this->a = a;
    }
    void print() {
        cout << "\nValue of a: " << this->a << endl;;
    }
    
};

main() {
    Sample s(10);
    s.print();
}