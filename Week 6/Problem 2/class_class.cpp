#include <iostream>

using namespace std;

class pntr_obj
{
protected:
    int roll_no;
    char name[100];
public:
    pntr_obj() {
    }    
    ~pntr_obj() {
    }
    int set_data(int roll_no, char* name){
        this->roll_no = roll_no;
        int i = 0 ;
        while(name[i] != '\0') {
            this->name[i] = name[i];
            i++;
        } 
        this->name[i] = '\0';
        return 1;
    }
    void print() {
        cout << "\nRoll No. : " << this->roll_no;
        cout << "\nName : " << this->name;
    }
    
};

main() {
    pntr_obj p1[3];
    for (int i = 0; i < 3; ++i)
    {
        puts("\n\n=======================================");
        puts("\n\nEnter the roll number of the student : ");
        int roll_no;
        cin >> roll_no;
        cin.ignore();

        char name[100];
        puts("\n\nEnter the name of the student: ");
        gets(name);
        p1[i].set_data(roll_no, name);
        p1[i].print();
    }
    

}