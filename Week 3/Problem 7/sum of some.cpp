#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {
    if (n ==0 or n == 1)
    {
        return 1;
    } 
    int total = 1;
    for (int i = 1; i <= n; ++i)  {
        total *= i;
    }
    return total;
}
int main() {
    cout << "PROGRAM: CALCULATE THE SUM OF 1 – x2 /2! + x4 /4! – x6 /6! +x8 /8! – x10/10!";
    cout << "\n";
    cout << "=========================================================";

    int x;
    cout << "\nEnter the value of x (in integer) : ";
    cin >> x ;

    int result = (                           1 
                    + (pow(x,2)/factorial(2)) 
                    + (pow(x,4)/factorial(4)) 
                    + (pow(x,6)/factorial(6)) 
                    + (pow(x,8)/factorial(8)) 
                    + (pow(x,10)/factorial(10))
                 ) ;
    cout << "\n\n";

    cout << "THE EXPRESSION EQUIVALENT TO "<< result;


    cout << "\n\n";
    return 0;
}

