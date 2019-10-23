#include "iostream"

using namespace std;

// Prototypes
void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);

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

    int countSecondArray;
    cout << "Number of integers you are about to enter in your second array: ";
    cin >> countSecondArray;
    int secondArray[countSecondArray  + 1 ];
    for (int i = 0; i < countSecondArray; ++i)
    {
        cout << "\nEnter number " << i+1 << ":   ";
        cin >> secondArray[i];
    }

    // Merging
    int unsortedArray[countFirstArray  + countSecondArray];

    for (int i = 0; i < countFirstArray; ++i)
    {
        unsortedArray[i] = firstArray[i];
    }
    for (int i = countFirstArray; i < (countFirstArray  + countSecondArray); ++i)
    {
        unsortedArray[i] = secondArray[i- countFirstArray];
    }

    // Sorting
    
    for (int i = 0; i < (countFirstArray + countSecondArray); ++i)
    {
        for (int j = 0; j < (countFirstArray + countSecondArray); ++j)
        {

            if (unsortedArray[i] < unsortedArray[j])
            {
                int itemp = unsortedArray[i];
                int jtemp = unsortedArray[j];
                unsortedArray[j] = itemp;
                unsortedArray[i] = jtemp;
            }
        }    
    }


    cout << endl << endl << endl;
    cout << "The sorted merged array: ";
    cout << endl << endl;
    for (int i = 0; i < (countFirstArray + countSecondArray); ++i)
    {
        cout<< unsortedArray[i] << ", ";
    }

    cout << endl << endl << endl;
    return 0;
}

