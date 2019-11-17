#include <iostream>

using namespace std;


class Number
{
protected:
    int a, b;
public:
    Number(int a, int b){
        this->a = a;
        this->b = b;
    };
    void print() {
        cout << "Value of A: " << this->a << "  |  " << "Value of B: " << this->b << endl<< endl;
    }
    int getA() {
        return this->a;
    }
    int getB() {
        return this->b;
    }
    Number operator++() {
        int a = this->getA();
        int b = this->getB();
        Number newton(++a,++b);
        return newton;
    }

    Number operator--() {
        int a = this->getA();
        int b = this->getB();
        Number newton(--a,--b);
        return newton;
    }

    Number operator-() {
        int a = this->getA();
        int b = this->getB();
        Number newton(-a,-b);
        return newton;
    }


};

main() {
    Number n1(2,2);
    puts("Summary of N1");
    n1.print();



    Number n2 = ++n1;
    puts("Summary of n2");
    n2.print();

    Number n3 = --n1;
    puts("Summary of n3");
    n3.print();

    Number n4 = -n1;
    puts("Summary of n4");
    n4.print();

    

}