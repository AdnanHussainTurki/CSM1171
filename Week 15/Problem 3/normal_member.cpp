#include<iostream>
using namespace std;
class shape
{
    public:
        virtual  void draw()
        {
            cout<<"\nI am drawing ";
         } 
         void draw1()
         {
            cout<<"\nI am inside member function ";
            draw();
         }
         shape()
         {
            cout<<"I am inside constructor ";
            draw();
         }
};
int main()
{
    shape a;
    a.draw1();
}
