#include <iostream>

using namespace std;
struct Employee
{
    char name[100];
    int basic_pay;
    float getGrossPay() {
        return (float)((float) (this->basic_pay) + (float) (this->basic_pay * 0.52));
    }
    void printSummary() {

    }
};

main() {
    int numberOfEmployees;
    puts("Enter the number of employees:");
    cin >> numberOfEmployees;

    Employee e[numberOfEmployees];
    for (int i = 0; i < numberOfEmployees; ++i)
    {
        cout << "\n\n\nEmployee " << (i+1) << endl;
        puts("=================");
        puts("Employee Name: ");
        cin.ignore();
        gets(e[i].name);
        cout << endl;
        puts("Employee Basic Pay: ");
        cin >> (e[i].basic_pay);
        cout << endl;
      
    }
    puts("\n\n\nPrinting Summary");
    for (int i = 0; i < numberOfEmployees; ++i)
    {
        cout << "\nEmployee " << (i+1) << endl;
        puts("=================");
        puts("Name: ");
        puts(e[i].name);
        puts("Basic Pay: ");
        cout << (e[i].basic_pay);
        puts("\nGross Pay: ");
        cout << e[i].getGrossPay();
        cout << endl;
    }
}