#include <iostream>
using namespace std;
// Ques : Take 3 positive integers input and print the greatest of them. --> nested 
int main()
{
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    cout << "Enter C : ";
    cin >> c;
    // a>b and b>c -> a>c-> a greatest
    if (a > b) { // b can never be the greatest
        if (a > c) {
            cout << a << " is greatest";
        } else {
            cout << c << " is greatest";
        }
    }
    else { // b>a
        if (b > c) {
            cout << b << " is greatest";
        }
        else {
            cout << c << " is greatest";
        }
    }

    return 0;
}