#include <iostream>
using namespace std;
// Display this AP - 1,3,5,7,9.. upto ‘n’ terms.
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    // 1 3 7 9
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << i << " ";
    }

    return 0;
}