#include<iostream>
using namespace std;
class shape
{
    public:
        void test()
    {
        cout<<"testing shape \n";
    }
    virtual void draw()
    {
        cout<<"Drawing shape \n";
    }
};
class circle : public shape
{
    public: 
    void draw()
    {
        cout<<"drawing circle \n";
    }
};
class square : public shape
{
    public:
        void draw()
        {
            cout<<"drawing square \n";
        }
};
class triangle : public shape
{
    public:
        void draw()
        {
            cout<<"drawing triangle \n";
        }
};
int main()
{
    shape *s[4];
    shape sh;
    
circle c;
square sq;
triangle t;
s[0]=&sh;
s[1]=&sq;
s[2]=&t;
s[3]=&c;
s[0]->draw();
s[1]->draw();
s[2]->draw();
s[3]->draw();
}
