#include <iostream>
using namespace std;
// Write a program to print reverse of a given number
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int r = 0;
    while (n != 0)
    {
        int ld = n % 10;
        r *= 10;
        r += ld;
        n /= 10;
    }
    cout << r;
}