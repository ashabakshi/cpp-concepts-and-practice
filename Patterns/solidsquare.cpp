#include<iostream>
using namespace std;
//solid square  making 
//rows - m , cols - 5
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for (int i =1; i<=n; i++){ // rows = n
        for(int j=1 ; j<=n; j++){//cols = n
        cout <<"*";

        }
        cout<<endl;
    }
    
}