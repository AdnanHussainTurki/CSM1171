#include <iostream>

using namespace std;


int main() {
	cout << "PROGRAM TO CHECK WHETHER THE INPUT NUMBER IS ODD OR EVEN";
	cout << "\n";
	cout << "=========================================================";
	int input;
	cout << "\nEnter the interested number:";
	cin >> input;
    cout << "\nYou have entered:" << input;

	(input%2 == 1) ? cout << "\n\nThe given number is ODD" : cout << "\n\nThe given number is EVEN";
	return 0;
}
