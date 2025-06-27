#include <iostream>
using namespace std;
// Display this gP - 1,2,4,8,16.. upto ‘n’ terms.
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    // 1 2 4 8 16
    int a = 1;
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << a << " ";
        a = a * 2;
    }

    return 0;
}