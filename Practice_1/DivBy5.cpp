#include <iostream>
using namespace std;
// Take positive integer input and tell if it is divisible by 5 or not
int main()
{
    int n;
    cout << "Enter positive number: ";
    cin >> n;
    if (n > 0)
    {
        if (n % 5 == 0)
        {
            cout << n << " is divisible by 5 ";
        }
        else
        {
            cout << n << " is not divisible by 5";
        }
    }
    else{
        cout << " Please Enter positive Number"; 
        }
}