#include "iostream"

using namespace std;

void display(char *a) {
    if (a[0] == '\0')
    {
        return;
    }
    cout << a[0] << endl;
    display(a+1);
}

main() {
    int countFirstArray;
    cout << "Number of elements you are about to enter in your first array: ";
    cin >> countFirstArray;
    char firstArray[countFirstArray + 1];
    int i = 0;
    for ( i = 0; i < countFirstArray; i++)
    {
        cout << "\nEnter number " << i+1 << ":   ";
        cin >> firstArray[i];
    }
    firstArray[i+1] = '\0';
    cout << endl << endl << endl;


    puts("Printing array using recursion:");
    display(firstArray);
}