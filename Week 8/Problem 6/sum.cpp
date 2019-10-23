#include "iostream"

using namespace std;


int sumFun(int *a) {
    if (a[0] == '\0')
    {
       return 0;
    }

    return *a + sumFun(a+1);
    
}

main() {
    int countFirstArray;
    cout << "Number of elements you are about to enter in your first array: ";
    cin >> countFirstArray;
    int firstArray[countFirstArray + 1];
    int i = 0;
    for ( i = 0; i < countFirstArray; i++)
    {
        cout << "\nEnter number " << i+1 << ":   ";
        cin >> firstArray[i];
    }
    firstArray[i+1] = '\0';
    cout << endl << endl << endl;


    puts("Sum of  array using recursion:");
    int sum  = sumFun(firstArray);
    cout << sum;
}