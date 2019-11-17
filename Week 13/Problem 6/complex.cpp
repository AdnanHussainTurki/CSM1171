#include <iostream>

using namespace std;


class Complex
{
protected:
    int real, imaginary;
public:
    Complex(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    };
    void print() {
        cout << "Complex : " << this->real << "+" << "(" << this->imaginary  << ")i"<< endl<< endl;
    }
    int getReal() {
        return this->real;
    }
    int getImaginary() {
        return this->imaginary;
    }
    Complex operator+(Complex &number) {
        int real = this->getReal() + number.getReal() ;
        int imaginary = this->getImaginary() + number.getImaginary() ;
        Complex newton(real,imaginary);
        return newton;
    }

    Complex operator-(Complex &number) {
        int real = this->getReal() - number.getReal() ;
        int imaginary = this->getImaginary() - number.getImaginary() ;
        Complex newton(real,imaginary);
        return newton;
    }

};

main() {
    Complex n1(2,2);
    puts("Summary of N1");
    n1.print();

    Complex n2(4,4);
    puts("Summary of N2");
    n2.print();

    Complex n3 = n1 + n2;
    puts("Summary of N3");
    n3.print();

    Complex n4 = n1 - n2;
    puts("Summary of N4");
    n4.print();


}