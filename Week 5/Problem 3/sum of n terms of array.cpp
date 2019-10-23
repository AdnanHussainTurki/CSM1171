#include <iostream>

using namespace std;
void sum_to_n(int *a, int n, int *sum) {
    for (int i = 0; i < n; ++i) {
        *sum = *sum + a[i];
    }
}
main() {
    cout<<"Program: Write a program through pointer variable to sum of n elements from array.";
    cout<<endl;
    cout<<"==================================================================================";
    cout<<endl;
    cout<<endl;
    cout<<endl;


    int array[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int sum = 0;
    int n ;
    cout << "Sum up to : ";
    cin >> n;
    sum_to_n(array, n, &sum);
    cout<<endl;
    cout<<endl;
    cout<<"Sum of the "<< n <<" elements of the array: " << sum;
    cout<<endl;
    cout<<endl;
    cout<<endl;

}