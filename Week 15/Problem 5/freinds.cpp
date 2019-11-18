#include<iostream>
using namespace std;
class friendfunc1;
class friendfunc2;
class friendfunc1
{
    private :
        int a,b;
    public:
        friendfunc1(int x,int y)
        {
            a=x;
            b=y;
        }
        friend int avg(friendfunc1&,friendfunc2&);
};
class friendfunc2
{
    private :
        int d,e,f;
    public:
        friendfunc2(int x,int y,int z)
        {
            d=x;
            e=y;
            f=z;
        }
        friend int avg(friendfunc1&,friendfunc2&);
};
int avg(friendfunc1 &p,friendfunc2 &q)
{
    int sum=p.a+p.b+q.d+q.e+q.f;
    return sum/5;
}

int main()
{
    friendfunc1 p(1,2);
    friendfunc2 q(3,4,5);
    int res=avg(p,q);
    cout<<"Average is "<<res;
}
