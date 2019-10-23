#include "iostream"

using namespace std;

int main() {
    
    int countIntegers;
    cout<< "Number of integers you are about to add in the list: ";
    cin>>countIntegers;

    int integerArray[countIntegers];
    int maxNumber = 0;
    int secondMaxnumber;
    for (int i = 1; i <= countIntegers; ++i)
    {
        cout << endl;
        cout << "Enter integer " << i << ": ";
        cin >> integerArray[i];
        if (integerArray[i] > maxNumber )
        {
            secondMaxnumber = maxNumber;
            maxNumber = integerArray[i];
        }
    }
    cout << endl;
    cout << endl;
    cout << "Max Number: "<< maxNumber;
    cout << endl;
    cout << "Second Max Number: "<< secondMaxnumber;



    return 0;
}