#include <iostream>

using namespace std;

class Sample
{
protected:
    int a  = 0;
    int b  = 0;
    int c  = 0;
    int d  = 0;
public:
    Sample(int a) {
        this->a = a;
    }
    Sample(int a, int b) {
        this->a = a;
        this->b = b;
    }
    Sample(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Sample(int a, int b, int c, int d) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    void sum() {
        cout << "\nSum  of A, B, C, D: " << (this->a + this->b +  this->c + this->d)   << endl;;
    }
    
};

main() {
    Sample s(10);
    s.sum();

    Sample s2(10, 20);
    s2.sum();

    Sample s3(10, 20, 30);
    s3.sum();

    Sample s4(10, 20, 30, 40);
    s4.sum();
}