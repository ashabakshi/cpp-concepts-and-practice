#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    //condition ? if true : if false ;
    (n%2==0)? cout<<"Even" : cout<<"Odd";
    return 0;
}