#include<iostream>
using namespace std;
    class number2
    {
        private:
            int val1,val2;
        public:
            number2()
            {
            }
            number2(int a,int b)
            {
                val1=a;
                val2=b;
            }
        void showdata()
        {
            cout<<"Value1 : "<<val1<<"\nValue2 : "<<val2;
        }
        friend number2 operator +(number2&,number2&);
    };
    number2 operator+(number2 &a,number2 &b)
    {
        number2 c;
        c.val1=a.val1+b.val1;
        c.val2=a.val2+b.val2;
        return c;
    }
int main()
{
    
    number2 p(1,2),q(3,4),r;
    cout<<"values of p : \n";
    p.showdata();
    cout<<"\nvalues of q : \n";
    q.showdata();
    cout<<"\nvalues of r addition of p and q : \n";
    r=p+q;
    r.showdata();
}
