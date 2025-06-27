#include <iostream>
using namespace std;
int main()
{
    // 5 integers -> 5,7,9,0,6
    int arr[5]; // declaration
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    arr[3] = 100; //updating
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << "  ";
    }
}