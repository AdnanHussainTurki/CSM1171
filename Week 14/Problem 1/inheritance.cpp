#include <iostream>

using namespace std;

class Person
{
private: 
    string nick_name;
     void setPersonalData(string first_name, string last_name, string nick_name) {
        this->first_name = first_name;
        this->last_name = last_name;
        this->nick_name = nick_name;
    }
protected:
    string first_name;
    string last_name;
public:
    void setPersonalData(string first_name, string last_name) {
        this->first_name = first_name;
        this->last_name = last_name;
    }
    string getNickName() {
        return this->nick_name;
    }
    string setNickName(string nick_name) {
        this->nick_name = nick_name;
        return nick_name;
    }

    
};

class Employee : public Person
{
private:
    int emp_code;
public:
    Employee(int emp_code, string first_name, string  last_name, string nick_name) {
        this->emp_code = emp_code;
        this->setPersonalData (first_name, last_name);
        this->setNickName(nick_name);
    }
    void printSummary() {
        puts("===========================================");
        puts("=============EMPLOYEE SUMMARY==============");
        cout << "Employee Code: " << this->emp_code << endl;
        cout << "Employee Name: " << this->first_name  << " " << this->last_name << endl;
        cout << "Employee Nick Name: " << this->getNickName()<< endl;
        puts("===========================================");

    }
    
};

main() {
    Employee e1(1, "Adnan", "Hussain", "Addu");
    e1.printSummary();
}