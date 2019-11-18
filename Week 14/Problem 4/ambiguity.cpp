#include<iostream>
using namespace std;
class A
{
    public :
    void show()
    {
        cout<<"\nHello I am A ";
    }
};
class B: public virtual A
{
    public:
    void showB()
    {
        cout<<"\nHello I am B";
    }
};
class C: public virtual A
{
    public:
    void showC()
    {
        cout<<"\nHello i am C";
    }
};
class D :public B,public C
{
    
};
int main()
{
    D obj;
    obj.showB();
    obj.showC();
    obj.show();
}
