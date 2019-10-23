#include "iostream"

using namespace std;

void printValues(int a, int b) {
    cout << endl;
    cout << endl;
    puts("\nNumber at variable 1: ");
    cout << a;
    puts("\nNumber at variable 2: ");
    cout << b;
}

void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b= temp;
    printValues(a,b);
}

void swap_reference(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
    printValues(*a,*b);
}

void displayMenu(int a, int b) {
    puts("\n\n\nWhat method you would like to choose to swap the values of variable 1 and variable 2: ");
    puts("1. By Value");
    puts("2. By Reference");
    puts("Press 1 or 2 as per your choice.");
    int choice;
    cin.ignore();
    cin>> choice;
    cin.ignore();
    switch(choice) {
        case 1: 
            swap_value(a,b);
            break;
        case 2:
            swap_reference(&a, &b);

            break;
        default: 
            displayMenu(a,b);
            break;
    }
}


int main() {
     int a, b;
    puts("Provide the number for variable 1:");
    cin>> a;
    puts("\n\nProvide the number for variable 2:");
    cin>> b;

    displayMenu(a,b);


    return 0;
}