#include <iostream>
using namespace std;
// WAP to find the highest factor of a number ‘n’ (other than n itself) ------ + break
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    int f = 1;
    // for (int i = 1; i < n; i++)
    // {
    //     if (n % i == 0)
    //         f = i;
    // }
    // cout << f;


    for(int i= n/2; i>1; i--){
        if(n%i==0){
            cout<<i<<" ";
            break;
        }
    }
    return 0;
}