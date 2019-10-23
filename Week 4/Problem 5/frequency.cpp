#include "iostream"

using namespace std;



int main() {
    int countFirstArray;
    cout << "Number of integers you are about to enter in your first array: ";
    cin >> countFirstArray;
    int firstArray[countFirstArray  + 1 ];
    int freqArray[countFirstArray  + 1 ][2];
    int freIndex = 0;
    int matched;
    for (int i = 0; i < countFirstArray; ++i)
    {
        cout << "\nEnter number " << i+1 << ":   ";
        cin >> firstArray[i];
        matched = 0;
        for (int j = 0; j < i; ++j)
        {
            if (freqArray[j][0] == firstArray[i])
            {
                // cout << "\n\n MATCHED AT INDEX:" <<  j << " FOR " << firstArray[i];
                freqArray[j][1] = freqArray[j][1] + 1;
                matched = 1;
            } 
        }
        if (matched == 0)
        {
            // cout << "\n\n NO MATCH FOR " << firstArray[i] << " IN FREQ ARRAY. CREATING NEW ENTRY AT INDEX: "<< freIndex << " WITH CURRENT FRY: 1";
            freqArray[freIndex][0] = firstArray[i];
            freqArray[freIndex][1] = 1;
            freqArray[freIndex][2] = 1;
            freIndex++;
        }

    }

    cout << endl << endl << endl;

    for (int i = 0; i < freIndex; ++i)
    {
        cout << "FREQUENCY OF " << freqArray[i][0] << " => " << freqArray[i][1] << endl;
        
    }

    cout << endl << endl << endl;

}