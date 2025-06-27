#include <iostream>
// Take positive integer input and tell if it is divisible by 5 or 3 not 15     
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    if ((n % 5 == 0 || n % 3 == 0) && (n%15!=0))
    {
        cout << "it is divisible by 5 or 3 but not 15 ";
    }
    else
    {
        cout << "It does not meet the criteria (either not divisible by 5 or 3, or it is divisible by 15) ";
    }

    return 0;
}