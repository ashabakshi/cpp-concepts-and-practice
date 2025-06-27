#include <iostream>
using namespace std;
// ques : Take 3 numbers input and tell if they can be the sides of a triangle
int main()
{
    int a, b, c;
    cout << "Enter 1st Side : ";
    cin >> a;
    cout << "Enter 2nd Side : ";
    cin >> b;
    cout << "Enter 3rd Side : ";
    cin >> c;
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        cout << " Valid Triangle ";
    }
    else
    {
        cout << "Not  Valid Triangle";
    }
    return 0;
}