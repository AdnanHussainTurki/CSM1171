#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cout << "PROGRAM: FINDING THE VALUES FOR (x + y) / (x - y) , (x + y)(x - y)";
	cout << "\n";
	cout << "=========================================================";
	int x;
	cout << "\nEnter value of x: ";
	cin >> x ;
    int y;
    cout << "\nEnter value of y: ";
    cin >> y ;

    if ((x-y) == 0)
    {
        cout << "\n";
        cout << "\n";
        cout << "Math Limit: Cannot find the values when the x-y = 0 as it will be undeterminate.";
        cout << "\n";
        cout << "\n";
        return 0;
    }

    cout << "\n";
    cout << "\n";
    cout << "The required values are: ";
    cout << "\n";
    cout << "(x + y) / (x - y): " << ((x + y) / (x - y));
    cout << "\n";

    cout << "(x + y)(x - y): " << ((x + y)*(x - y));
    cout << "\n";


	return 0;
}

