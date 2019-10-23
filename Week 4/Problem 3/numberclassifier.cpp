#include "iostream"

using namespace std;

int main() {
    int countNumbers;
    cout << "Number of integers you are about to enter: ";
    cin >> countNumbers;
    int integers[countNumbers  + 1 ];
    for (int i = 0; i < countNumbers; ++i)
    {
        cout << "\nEnter number " << i+1 << ":   ";
        cin >> integers[i];
    }

    // Classifier
    int positiveCount =0, negativeCount =0, oddCount =0, evenCount =0;
    int positiveIntegers[countNumbers + 1], negativeIntegers[countNumbers + 1], oddIntegers[countNumbers + 1], evenIntegers[countNumbers + 1];

    for (int i = 0; i < countNumbers; ++i)
    {
        int integer = integers[i];
        // Check Positivity & Incrementation
        if (integer >= 0)
        {
            positiveIntegers[positiveCount] = integer;
            positiveCount++;
        }
        // Check Negativity & Incrementation
        if (integer < 0)
        {
            negativeIntegers[negativeCount] = integer;
            negativeCount++;
        }
        // Check Odd & Incrementation
        if (integer%2 == 1)
        {
            oddIntegers[oddCount] = integer;
            oddCount++;
        }

        // Check Even & Incrementation
        if (integer%2 == 0)
        {
            evenIntegers[evenCount] = integer;
            evenCount++;
        }
    }


    // Display Integers
    cout << endl << endl << endl << "No of Integers : " << countNumbers ;
    cout << endl << "Integers : ";
    for (int i = 0; i < countNumbers; ++i)
    {
        cout<< integers[i] << ", ";
    }


    // Display Positives
    cout << endl << endl << endl << "No of Positives : " << positiveCount ;
    cout << endl << "Positives : ";
    for (int i = 0; i < positiveCount; ++i)
    {
        cout<< positiveIntegers[i] << ", ";
    }

    // Display Negatives
    cout << endl << endl << endl << "No of Negatives : " << negativeCount ;
    cout << endl << "Negatives : ";
    for (int i = 0; i < negativeCount; ++i)
    {
        cout<< negativeIntegers[i] << ", ";
    }

    // Display Odds
    cout << endl << endl << endl << "No of Odds : " << oddCount ;
    cout << endl << "Odds : ";
    for (int i = 0; i < oddCount; ++i)
    {
        cout<< oddIntegers[i] << ", ";
    }

    // Display Evens
    cout << endl << endl << endl << "No of Evens : " << evenCount ;
    cout << endl << "Evens : ";
    for (int i = 0; i < evenCount; ++i)
    {
        cout<< evenIntegers[i] << ", ";
    }

    cout << endl << endl << endl;


    return 0;
}