#include "iostream"

using namespace std;


// moves required = 2^n  - 1
void towerOfHonoi(int n, char from, char to, char aux) {
    if (n==1)
    {
        // One move is enough
        cout << endl<< "Moving disk " << n << " from rod "<< from << " to " << to << endl;
        return;
    }
    towerOfHonoi(n-1, from, aux, to);
    cout << endl<< "Moving disk " << n << "  from rod "<< from << " to " << to << endl;
    towerOfHonoi(n-1, aux, to, from);


}


int main() {
     int a;
    puts("Provide the number for disks:");
    cin>> a;


    towerOfHonoi(a, 'A', 'C', 'B');


    return 0;
}