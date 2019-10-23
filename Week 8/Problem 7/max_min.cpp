#include "iostream"

using namespace std;


int maxCalc(int *a, int temp_max) {
    if (a[0] == '\0')
    {
       return temp_max;
    }
    // cout << "Compareing b/w " << *a << " and " << temp_max;
    if (*a > temp_max)
    {
        return maxCalc(a+1, *a);
    }
    else {
         return maxCalc(a+1, temp_max);
    }
   
}
int minCalc(int *a, int temp_min) {
    if (a[0] == '\0')
    {
       return temp_min;
    }
    if (*a < temp_min)
    {
        return minCalc(a+1, *a);
    }
    else {
         return minCalc(a+1, temp_min);
    }

   
    
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

    puts("Max of  array using recursion:");
    int max  = maxCalc(firstArray, 0);
    cout << max;
    puts("\n\nMin of  array using recursion:");
    int min  = minCalc(firstArray, 0);
    cout << min;
}