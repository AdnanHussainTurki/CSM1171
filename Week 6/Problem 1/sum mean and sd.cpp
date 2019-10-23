/**
 * @Author: Adnan Hussain Turki
 * @Website: www.myphpnotes.com
 * @Email Address: 
=====================================
 * @Creation Time:   2019-10-07 00:44:25
 * @Last Modified by:   Adnan
 * @Last Modified time: 2019-10-23 23:28:44
=====================================
   PROPERTY OF WWW.MYPHPNOTES.COM
 */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void read_array(int *a, int n) {
    cout<< "\n\nReading Array:\n";
    for (int i = 0; i < n; ++i)
    {
        cout<< "Enter Element " << i << " : ";
        cin >> a[i];
    }
}

void mean(int *a, int n, float *mean) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = sum + a[i];
    }
    *mean = (sum/(float)n);
}

void sd(int *a, int n, float *sdVal) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = sum + a[i];
    }
    float mean = (sum/(float)n);
    float nsd = 0;
    for (int i = 0; i < n; ++i) {
        nsd += pow(a[i] - mean,2);
    }
    *sdVal = pow( (nsd/(float)n), 0.5);
}
void sum_to_n(int *a, int n, int *sum) {
    for (int i = 0; i < n; ++i) {
        *sum = *sum + a[i];
    }
}
main() {
    cout<<"Program: program using pointers to compute the sum, mean and standard deviation of all elements stored in an array of n real numbers.";
    cout<<endl;
    cout<<"=====================================================================================================================================";
    cout<<endl;
    cout<<endl;

    int numberOfElements;
    int sum = 0; float sdVal = 0; float meanVal = 0;

    cout << "Enter the elements you are about to enter:";
    cin >> numberOfElements;

    int array[numberOfElements];
    read_array(array, numberOfElements);
    sum_to_n(array, numberOfElements, &sum);
    mean(array, numberOfElements, &meanVal);
    sd(array, numberOfElements, &sdVal);

    cout << "\n\n\nSum of all "<< numberOfElements << " elements of array: " << sum;
    cout << "\n\n\nMean of all "<< numberOfElements << " elements of array: " << meanVal;
    cout << "\n\n\nSD of all "<< numberOfElements << " elements of array: " << sdVal;

}