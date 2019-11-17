#include <iostream>

using namespace std;

class Customer
{
protected:
    string name;
    int age;
public:
    Customer set(string name, int age) {
        this->name = name;
        this->age = age;
        return *this;
    }
    string getName() {
        return this->name;
    }

    int getAge() {
        return this->age;
    }

    void display() {
        puts("");
        puts("================= Customer Info =================");
        cout << "Name: " << (this->getName());
        puts("");
        cout << "Age: " << (this->getAge()) << endl;
        puts("=================================================\n\n");


    }
    
};
main() {
    Customer c[10];
    for (int i = 0; i < 10; ++i)
    {
        puts("===================================================");
        puts("Provide the Customer name: ");
        string name; 
        cin >> name;
        puts("Provide the Customer age: ");
        int age; 
        cin >> age;

        c[i].set(name, age);
        c[i].display();
    }

}