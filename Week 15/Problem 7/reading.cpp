#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("adnan.txt",ios::app);
    ifstream infile("adnan.txt");
    string sent;
    getline(cin,sent);
    outfile<<sent;
    outfile.close();
    char a[100];
    int k=0;
    while(infile>>a[k])
    {
        k++;
    }
    for(int i=k;i>=0;i--)
    {
        cout<<a[i];
    }
    
}
