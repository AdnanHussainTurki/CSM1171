#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    int age;
public:
    Employee(string name, int age) {
        this->name = name;
        this->age = age;
    }
    string getName() {
        return this->name;
    }

    int getAge() {
        return this->age;
    }

    void display() {
        puts("");
        puts("================= EMPLOYEE INFO =================");
        cout << "Name: " << (this->getName());
        puts("");
        cout << "Age: " << (this->getAge()) << endl << endl;
        puts("=================================================");


    }
    
};
main() {
    Employee e1("Adnan Hussain Turki", 21);
    e1.display();

}