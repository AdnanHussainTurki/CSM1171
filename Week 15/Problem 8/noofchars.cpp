#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile("adnan.txt");
    char a[100];
    int k=0;
    while(infile>>a[k])
    {
        k++;
    }
    cout<<"number of characters in file : "<<k;
}
