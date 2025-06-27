#include <iostream>
using namespace std;
// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.
int main()
{
    int cp;
    cout << "Enter Cost Price : ";
    cin >> cp;
    int sp;
    cout << "Enter Selling Price : ";
    cin >> sp;
    if (sp > cp)
    {
        cout << "Profit is "<< sp-cp;
    }
    else if (sp < cp)
    {
        cout << "Loss is "<<cp-sp;
    }
    else {
        cout << " NO Profit NO Loss";
    }

    return 0;
}