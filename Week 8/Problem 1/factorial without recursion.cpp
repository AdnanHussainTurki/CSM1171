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
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    cout << result;

}
