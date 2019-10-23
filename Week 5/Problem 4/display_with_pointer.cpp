#include <iostream>

using namespace std;
void readingArray(char *a, int n) {
    cout<<"\n\n\nReading Array:";
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter Element " << i << ": ";
        cin >> a[i];
    }
    cout<<endl<<endl;
}
void displayArray(char *a, int n) {
    cout<<"\n\n\nDisplaying Array:";
    cout<<endl;
    for (int i = 0; i < n; ++i) {
        cout << "\nElement " << i << ": " << a[i];
    }
}
main() {
    cout<<"Program: program for reading elements using pointer into array and display the values using array.";
    cout<<endl;
    cout<<"==================================================================================================";
    cout<<endl;
    cout<<endl;
    cout<<endl;

    int  numberOfElements;
    char array[100];
    cout << "How many elements you are about to enter: ";
    cin >> numberOfElements;

    readingArray(array, numberOfElements);
    displayArray(array, numberOfElements);

}
