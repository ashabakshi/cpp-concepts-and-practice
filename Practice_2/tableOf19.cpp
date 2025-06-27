#include <iostream>
using namespace std;
// Ques  : table of 19
int main()
{
    //     for (int i = 19; i <= 190; i+=19)
    //     {
    //             cout << i << " ";

    //     }
    // or
    // input from user
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << "Table of " << n << ":"<< endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << "x" << i << "="<< n * i << endl;
    }

    return 0;
}