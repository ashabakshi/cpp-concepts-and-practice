#include <iostream>
using namespace std;
// Ques  : Print all the odd numbers from 1 to 100
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}