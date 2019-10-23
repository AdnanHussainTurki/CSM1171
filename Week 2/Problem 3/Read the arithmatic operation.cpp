#include <iostream>

using namespace std;


int main() {
	cout << "PROGRAM: evaluate the arithmetic expression";
	cout << "\n";
	cout << "=========================================================";
	int a,b,c,d,e,f,g;
	
	cout << "\nEnter A:";
	cin >> a ;
	
	cout << "\nEnter B:";
	cin >> b ;
	
	cout << "\nEnter C:";
	cin >> c ;
	
	cout << "\nEnter D:";
	cin >> d ;
	
	cout << "\nEnter E:";
	cin >> e ;
	
	cout << "\nEnter F:";
	cin >> f ;
	
	cout << "\nEnter G:";
	cin >> g ;
	
	int result = ((a + b / c * d- e) * (f - g));
	cout << "\n\nVALUE OF EXPRESSION (((a + b / c * d- e) * (f - g)).): ";
	cout << result;
	 
	return 0;
}

