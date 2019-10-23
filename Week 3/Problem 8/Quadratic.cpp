#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "PROGRAM: FIND THE ROOTS OF QUADRATIC EQUATION";
    cout << "\n";
    cout << "=========================================================";

    int A;
    cout << "\n\nFor a quadratic equation Ax^2 + Bx + C = 0 ";
    cout << "\nEnter the value of A: ";
    cin >> A ;

    int B;
    cout << "\n\nFor a quadratic equation Ax^2 + Bx + C = 0 ";
    cout << "\nEnter the value of B: ";
    cin >> B ;

    int C;
    cout << "\n\nFor a quadratic equation Ax^2 + Bx + C = 0 ";
    cout << "\nEnter the value of C: ";
    cin >> C ;

    int D = ((B*B) - (4*A*C));
    if (D < 0)    {
        cout << "\nROOTS ARE IMAGINARY!!";
        cout << "\nDISCRIMINANT: " << D;
        cout << "\nFIRST ROOT: " << (-1 * B) << " + " << sqrt(abs(D)) << "i" << "/" << (2*A);
        cout << "\nSECOND ROOT: " << (-1 * B) << " - " << sqrt(abs(D)) << "i" << "/" << (2*A);
        cout << "\n\n";
        return 0;
    }

    
    cout << "\nDISCRIMINANT: " << D;
    cout << "\nFIRST ROOT: " << (((-1 * B) + sqrt(D))/(2*A));
    cout << "\nSECOND ROOT: " << (((-1 * B) - sqrt(D))/(2*A));


    cout << "\n\n";
    return 0;
}