#include <iostream>
using namespace std;
int main()
{
    int i, j, k, m1[10][10], m2[10][10], mulmatrix[10][10];
    cout << "2*2 MATRIX MULTIPLICATION";
    cout << "\nEnter the first matrix\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "\nEnter the second matrix\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> m2[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            mulmatrix[i][j]=0;
        }
    }
    cout << "\nMultiplication matrix";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                mulmatrix[i][j] += (m1[i][k] * m2[k][j]);
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        cout << "\n";
        for (j = 0; j < 2; j++)
        {
            cout << mulmatrix[i][j] << " ";
        }
    }
}