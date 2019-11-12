#include <iostream>

using namespace std;

struct Complex
{
    int r;
    int i;
    void print() {
        cout << r << " + ("<< i << "i)"; 
    }
    void input() {
        puts("Enter real part of the complex number: ");
        cin >> this->r;
        puts("Enter imaginary part of the complex number: ");
        cin >> this->i;
    }
    Complex add(Complex *c) {
        Complex add;
        add.r = this->r + c->r;
        add.i = this->i + c->i;
        return add;
    }
    Complex substract(Complex *c) {
        Complex substract;
        substract.r = this->r - c->r;
        substract.i = this->i - c->i;
        return substract;
    }
    Complex multiply(Complex *c) {
        Complex multiply;
        multiply.r = (this->r * c->r) - (this->i * c->i);
        multiply.i = (this->r * c->i) + (this->i * c->r);
        return multiply;
    }
};
main() {
    Complex cOne, cTwo;
    puts("Complex Number 1");
    puts("=================");
    cOne.input();
    puts("You have provided: ");
    cOne.print();
    puts("\n\n");
    puts("Complex Number 2");
    puts("=================");
    cTwo.input();
    puts("You have provided: ");
    cTwo.print();
    puts("\n\n");
    int choice = -1;
    do {
        puts("Choose the operation:");
        puts("1. Addition");
        puts("2. Substraction");
        puts("3. Multiplication");
        puts("0. Exit");
        puts("\nEnter Choice: ");
        cin >> choice;
        switch(choice) {
            case 1:
                puts("\n\nAdding the given two complex numbers: ");
                Complex cAdd;
                cAdd = cOne.add(&cTwo);
                cAdd.print();
                puts("\n\n\n");

                break;
            case 2:
                puts("\n\nSubstraction the given two complex numbers: ");
                Complex cSubstruct;
                cSubstruct = cOne.substract(&cTwo);
                cSubstruct.print();
                puts("\n\n\n");
                break;
            case 3:
                puts("\n\nMultiplication the given two complex numbers: ");
                Complex cMultiplication;
                cMultiplication = cOne.multiply(&cTwo);
                cMultiplication.print();
                puts("\n\n\n");
                break;
            case 0:
                break;
        }
    } while (choice != 0);
}