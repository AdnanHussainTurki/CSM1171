#include <iostream>

using namespace std;

class Staff
{
protected:
    int salary = 20000;
public:
    int getSalary() {
        return this->salary;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    void printSalary() {
        puts("THE SALARY IS: ");
        cout << this->salary << endl;
        puts("================");
    }
};

class Teaching: public Staff
{
public:
      Teaching() {
        this->setSalary(30000);
      }
};

class NonTeaching: public Staff
{
public:
    NonTeaching() {
        this->setSalary(25000);
      }
      
};

class Officer: public Staff
{
public:
      Officer() {
        this->setSalary(32000);
      }
};

class RegularNonTeaching: public NonTeaching
{
public:
    RegularNonTeaching() {
        this->setSalary(25000);

    };
    
};

class CasualNonTeaching: public NonTeaching
{
public:
    CasualNonTeaching() {
        this->setSalary(23000);

    }
    
};

main() {
    Staff s1;
    s1.printSalary();

    Teaching t1;
    t1.printSalary();

    NonTeaching nt1;
    nt1.printSalary();

    Officer o;
    o.printSalary();

    RegularNonTeaching rnt;
    rnt.printSalary();

    CasualNonTeaching cnt;
    cnt.printSalary();

}