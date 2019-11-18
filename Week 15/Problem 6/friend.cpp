#include<iostream>
using namespace std;
class student
{
    private :
        char name[80];
        char course[80];
        int age;
        int year;
    public :
        void getdata()
        {
            cout<<"Enter you name : ";
            gets(name);
            cout<<"Enter your course : ";
            gets(course);
            cout<<"Enter the year : ";
            cin>>year;
            cout<<"Enter age : ";
            cin>>age;
        }
        friend void display(student&);
}; 
void display(student &a)
{
    system("cls");
    cout<<"Name : "<<a.name;
    cout<<"\ncourse : "<<a.course;
    cout<<"\nyear : "<<a.year;
    cout<<"\nage : "<<a.age;
}
int main()
{
    student a;
    a.getdata();
    display(a);
}
