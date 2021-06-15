#include <iostream>
using namespace std;
class number
{
private:
    int a, b;
    float r;

public:
    void getdata()
    {
    cout << "Enter a , b values:";
    cin >> a>>b;
    }
    void add()
    {
         r = a + b;
        cout << "a+b=" << r;
    }
}; 
int main()
{
    number num;
    num.getdata();    
    num.add();
}