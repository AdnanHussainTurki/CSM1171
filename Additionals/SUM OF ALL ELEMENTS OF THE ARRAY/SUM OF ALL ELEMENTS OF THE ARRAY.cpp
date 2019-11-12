#include "iostream"

using namespace std;

int sum_array(int a[], int lb, int ub) {
    if (lb > ub)
    {
        return 0;
    }
    return a[lb] + sum_array(a, lb+1, ub);
}

int main() {
    int countFirstArray;
    cout << "Number of integers you are about to enter in your first array: ";
    cin >> countFirstArray;
    int firstArray[countFirstArray  + 1 ];
    for (int i = 0; i < countFirstArray; ++i)
    {
        cout << "\nEnter number " << i+1 << ":   ";
        cin >> firstArray[i];
    }
    cout << endl << endl << endl;

    puts("Sum of all elements of the array:");
    cout << sum_array(firstArray, 0, countFirstArray - 1);

 
}

