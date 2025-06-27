#include <iostream>
using namespace std;
// take integer input and print the absolute value of that integer
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    { // n<0
        cout << -n;
    }
}