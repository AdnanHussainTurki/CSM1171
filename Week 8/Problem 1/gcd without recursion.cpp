#include <iostream>

using namespace std;

// int gcd(int a, int b) {
//     if (a == 0) 
//        return b; 
//     if (b == 0) 
//        return a; 
   
//     // base case 
//     if (a == b) 
//         return a; 
   
//     // a is greater 
//     if (a > b) 
//         return gcd(a-b, b); 
//     return gcd(a, b-a); 
// }

main()  {
    puts("Enter the number for which the gcd has be calculated:");
    int n1, n2;
    cin >> n1 >> n2;

    puts("GCD for given number is: ");
    while(n1 == n2) {
        if (n1 > n2) 
            n1 = n1-n2; 
        else
            n1= n2-n1;
    }
    cout << n1;

}
