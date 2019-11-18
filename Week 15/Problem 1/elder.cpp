#include<iostream>
#include<string.h>
using namespace std;
class Person
{
        public:
        int age;
        string name;

        Person(int a,string b)
        {
            this->age=a;
            this->name=b;
        }
};

void elder(Person *a,Person *b)
{
    if((a->age)>(b->age))
    {
        cout<<a->name<<" is elder";
    }
    else
    {
        cout<<b->name<<" is elder";
    }
}
int main()
{
    Person p(10,"person1"),q(12,"person2");
    Person *r=&p;
    Person *s=&q;
    elder(r,s);
}
