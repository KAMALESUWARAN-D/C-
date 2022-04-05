#include <iostream>
using namespace std;
class number
{
public:
    
  int fact(int n)
    {
        if (n == 1 && n == 0)
        {
            return 1;
        }
        else
        {
            return (n * fact(n - 1));
        }
    }
};
int main()
{
    int n,f=0;
    cout << " Factorial ";
    cout << "\nEnter the number";
    cin >> n;
    number N;
    f=N.fact(n);
    cout << "Factorial is " <<f ;
}