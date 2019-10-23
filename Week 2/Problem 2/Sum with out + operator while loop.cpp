/*
* @Author: Adnan
* @Date:   2019-09-16 07:55:34
* @Last Modified by:   Adnan
* @Last Modified time: 2019-10-22 13:37:51
*/
#include <iostream>
using namespace std;

/*
Method 2: Using while loop and incremental operator (++)
 */

int main() {
	cout << "PROGRAM: ADDITION OF TWO NUMBERS";
	cout << "\n";
	cout << "=========================================================";
	int inputOne;								//20
	cout << "\nEnter the first number:";
	cin >> inputOne;
	
	int inputSecond;							//10
	cout << "\nEnter the second number:";
	cin >> inputSecond;
	
	int i =0;
	while(i < inputSecond) {
		inputOne++;
		i++;
		// cout << "\n\nThe value of Input One at " << i << " loop is " << inputOne;
	}
	cout <<  "\nThe sum of the number is ";
	cout <<  inputOne;
	return 0;
}

