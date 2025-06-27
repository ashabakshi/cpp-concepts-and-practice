#include <iostream>
using namespace std;
// alphabet square  making
// rows - m , cols - 5
int main()
{
    int n;
    cout << "Enter number  : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    { // rows = n
        for (int j = 1; j <= n; j++)
        { // cols = n
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
}