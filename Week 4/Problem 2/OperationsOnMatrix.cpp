#include "iostream"

using namespace std;

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

    int sm;
    cout<< "Dimensions of two dimensions second matrix (M * N), Enter M: ";
    cin>>sm;

    int sn;
    cout<< "Dimensions of two dimensions second matrix (M * N), Enter N: ";
    cin>>sn;
    cout << endl << endl;

    // Building Two Dimensional Array
    int sM = sm-1;
    int sN = sn-1;




    int firstMatrix[100][100];
    int secondMatrix[100][100];
    int sumMatrix[100][100];
    int productMatrix[100][100];



    for (int i = 0; i <= fM; ++i)
    {
        for (int j = 0; j <= fN; ++j)
        {

            cout << "Enter element["<< (i+1) << "," << (j+1) << "] of First Matrix: ";
            cin >> firstMatrix[i][j];
        }
    }
    cout << endl << endl;

    for (int i = 0; i <= sM; ++i)
    {
        for (int j = 0; j <= sN; ++j)
        {
            cout << "Enter element["<< (i+1) << "," << (j+1) << "] of Second Matrix: ";
            cin >> secondMatrix[i][j];
            sumMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
    cout << endl << endl << endl << endl;

    // Rendering Sum of two matrices
    cout << endl << endl;
    cout << "Sum of Given Matrix is:";
    cout << endl ;

    for (int i = 0; i <= fM; ++i)
    {   cout<< "|";
        for (int j = 0; j <= fN; ++j)
        {

            cout << sumMatrix[i][j] <<  ((j==(fN)) ? "": ",");
        }
        cout<< "|" << endl;
    }

    

    if (fN != sM)
    {
        cout << endl << endl;
        cout << "Cannot find the product of these matrices as the dimensions are in conflict.";
        cout << endl << endl;
        return 0;
    }
    cout << endl << endl;
    cout << "Product of Given Matrix is:";
    cout << endl << endl;

    // Calculating Product
    for (int i = 0; i <= fM; ++i)
    {   
        cout<< "|";
        for (int j = 0; j <= sN; ++j)
        {   
            // cout << "A["<< i << "," << j<<"] => ";
            // ith row * jth coloumn
            int ithrow[30];
            int jthcoloumn[30];
            for (int p = 0; p <= fM; ++p)
            {
                // cout << "a["<< i << "][" << p<< "]" ;//<< "b["<< i << "][" << p<< "]" <<  "+";
                ithrow[p] = firstMatrix[i][p];
            }

            for (int q = 0; q <= sM; ++q)
            {
                // cout << "b["<< j << "][" << q<< "] + " ;//<< "b["<< i << "][" << p<< "]" <<  "+";
                jthcoloumn[q] = secondMatrix[q][j];
            }

            for (int o = 0; o <= fM; ++o)
            {
                productMatrix[i][j] =  productMatrix[i][j] + (ithrow[o]*jthcoloumn[o]);
            }
            cout<< productMatrix[i][j];
            cout << ((j==(sN)) ? "": ",");
        }
        cout<< "|" << endl;
    }
    return 0;
}

