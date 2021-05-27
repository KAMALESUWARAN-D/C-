#include <iostream>
using namespace std;
int main()
{
    int i, j, m1[10][10], m2[10][10], addmatrix[10][10];
    cout << "2*2 MATRIX ADDISION";
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
    cout << "\nAddition matrix";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            addmatrix[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        cout << "\n";
        for (j = 0; j < 2; j++)
        {
            cout << addmatrix[i][j] << " ";
        }
    }
}