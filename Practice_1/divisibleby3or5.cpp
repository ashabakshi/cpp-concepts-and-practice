#include <iostream>
// Take positive integer input and tell if it is divisible by 5 or 3
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    if (n % 5 == 0 || n % 3 == 0)
    {
        cout << "it is divisible by 5 or 3";
    }
    else
    {
        cout << "it is  not divisible by 5 or 3";
    }

    return 0;
}