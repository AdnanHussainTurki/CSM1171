#include "iostream"

using namespace std;

void printTranspose(int a[100][100], int row, int coloumn) {
    puts("\n\n\nTranspose of the given matrix is: \n");
    for (int i = 0; i <= coloumn; ++i)
    {   cout<< "|";
        for (int j = 0; j <= row; ++j)
        {
            cout << a[j][i] <<  ((j==(row)) ? "": ",");
        }
        cout<< "|" << endl;
    }
}

int main() {
    
    int fm;
    cout<< "Dimensions of two dimensions first matrix (M * N), Enter M: ";
    cin>>fm;

    int fn;
    cout<< "Dimensions of two dimensions first matrix (M * N), Enter N: ";
    cin>>fn;
    cout << endl << endl;

    // Building Two Dimensional Array
    int fM = fm-1;
    int fN = fn-1;


    int firstMatrix[100][100];

    for (int i = 0; i <= fM; ++i)
    {
        for (int j = 0; j <= fN; ++j)
        {

            cout << "Enter element["<< (i+1) << "," << (j+1) << "] of First Matrix: ";
            cin >> firstMatrix[i][j];
        }
    }
    cout << endl << endl;

    cout << "Provided Matrix:";
    cout << endl ;
    
    for (int i = 0; i <= fM; ++i)
    {   cout<< "|";
        for (int j = 0; j <= fN; ++j)
        {
            cout << firstMatrix[i][j] <<  ((j==(fN)) ? "": ",");
        }
        cout<< "|" << endl;
    }

    printTranspose(firstMatrix, fM, fN);

}
