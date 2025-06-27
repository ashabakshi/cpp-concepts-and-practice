#include <iostream>
using namespace std;
// Write a program to print sum of digits of a given number.
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        int ld = n% 10;
        n = n / 10; // n/10=10
        sum+= ld;
    }
    cout << sum;
}