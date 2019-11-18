#include<iostream>
using namespace std;
class mean
{
    private:
        int n;
        int a[];
    public :
        void getdata()
        {
            cout<<"Enter the number of elements :";
            cin>>n;
            cout<<"Enter the elements : \n";
            for(int i=0;i<n;i++)
            {
                cout<<"a["<<i<<"] : ";
                cin>>a[i];
            }
        }
        friend int result(mean&);
};
int result(mean &obj)
{
    int p=obj.n;
    int sum=0;
    for(int i=0;i<p;i++)
    {
        sum+=obj.a[i];
    }
    return sum/p;
}
int main()
{
    mean a;
    a.getdata();
    int avg=result(a);
    cout<<"Mean is : "<<avg;
}
