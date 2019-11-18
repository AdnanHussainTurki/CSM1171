#include<iostream>
#include<exception>
using namespace std;
int main()
{
    class except
    {
    private:
    exception t;
    int a,b,c;
    string msg;
    public:
        except()
        {
            msg="Divided by zero exception ";
        }
    void getnums()
    {
    cout<<"Enter the numbers ";
    cin>>a>>b;
    }
    void div()
    {
    
    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<"division is "<<c;
        }
        else
        {
            throw t;
        }
    }
    catch(exception t)
    {
        cout<<msg;
    }
}
};
except a;
a.getnums();
a.div();
}
