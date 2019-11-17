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
    Number operator+(Number &number) {
        int a = this->getA() + number.getA() ;
        int b = this->getB() + number.getB() ;
        Number newton(a,b);
        return newton;
    }

    Number operator-(Number &number) {
        int a = this->getA() - number.getA() ;
        int b = this->getB() - number.getB() ;
        Number newton(a,b);
        return newton;
    }

    Number operator*(Number &number) {
        int a = this->getA() * number.getA() ;
        int b = this->getB() * number.getB() ;
        Number newton(a,b);
        return newton;
    }

    Number operator/(Number &number) {
        int a = this->getA() / number.getA() ;
        int b = this->getB() / number.getB() ;
        Number newton(a,b);
        return newton;
    }
};

main() {
    Number n1(2,2);
    puts("Summary of N1");
    n1.print();

    Number n2(4,4);
    puts("Summary of N2");
    n2.print();

    Number n3 = n1 + n2;
    puts("Summary of N3");
    n3.print();

    Number n4 = n1 - n2;
    puts("Summary of N4");
    n4.print();

    Number n5 = n1 * n2;
    puts("Summary of N5");
    n5.print();

    Number n6 = n2/ n1;
    puts("Summary of N6");
    n6.print();

}