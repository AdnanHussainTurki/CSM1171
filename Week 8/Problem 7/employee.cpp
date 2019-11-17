#include <iostream>

using namespace std;

class Employee
{
protected: 
    int emp_code;
    int dept_code;
    int age;
    int basic = 0;
    int DA = 0;
    int HRA = 0;

public:
    
    void putdata(int emp_code, int dept_code, int age, int basic, int da, int hra) {
        this->emp_code = emp_code;
        this->dept_code = dept_code;
        this->age = age;
        this->basic = basic;
        this->DA = da;
        this->HRA = hra;
    }
    int calculatesalary() {
        return (this->basic + this->DA + this->HRA);
    }
    void getdata(){
        puts("\n======================================");
        puts("========== EMPLOYEE SUMMARY ===========");
        cout << "Employee Code: " << this->emp_code << endl;
        cout << "Employee Dept: "<< this->dept_code << endl;
        cout << "Employee Age: " << this->age << endl;
        cout << "Employee Salary: " << this->calculatesalary() << endl;
        puts("======================================");
        puts("======================================\n");
    }
    
};
main() {
    
    Employee e[10];
    for (int i = 0; i < 10; ++i)
    {
        puts("===================================================");
        puts("Provide the Employee code: ");
        int emp_code; 
        cin >> emp_code;
        puts("Provide the Employee department code: ");
        int dept_code; 
        cin >> dept_code;
        puts("Provide the Employee age: ");
        int age; 
        cin >> age;
        puts("Provide the Employee Basic Salary: ");
        int basic; 
        cin >> basic;
        puts("Provide the Employee DA: ");
        int DA; 
        cin >> DA;
        puts("Provide the Employee HRA: ");
        int HRA; 
        cin >> HRA;
        e[i].putdata(emp_code, dept_code, age, basic, DA, HRA);
        e[i].getdata();
    }
    

    


}