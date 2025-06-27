#include <iostream>
using namespace std;
// Ques : Take 3 positive integers input and print the greatest of them.
int main()
{
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    cout << "Enter C : ";
    cin >> c;
    if ((a > b) && (a > c))
    {
        cout << a << " A is Greatest ";
    }
    else if ((b > a) && (b > c))
    {
        cout<< b << " B is Greatest";
    }
    else
    {
        cout << c << "C is Greatest";
    }
    return 0;
}