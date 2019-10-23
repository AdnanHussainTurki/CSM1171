#include <iostream>

using namespace std;

int fact(int n) {
    if (n<=1)
    {
        return 1;
    }
    return n * fact(n-1);
}

main()  {
    puts("Enter the number for which the factorial has be calculated:");
    int n;
    cin >> n;

    puts("Factorial for given number is: ");
    cout << fact(n);

}
