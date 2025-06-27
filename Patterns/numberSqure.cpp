#include<iostream>
using namespace std;
//number square  making 
//rows - m , cols - 5
int main(){
    int n;
    cout<<"Enter side of square : ";
    cin>>n;
    for (int i =1; i<=n; i++){ // rows = n
        for(int j=1 ; j<=n; j++){//cols = n
        cout <<j<<" ";
        }
        cout<<endl;
    }
    
}
    
