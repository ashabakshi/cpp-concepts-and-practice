#include<iostream>
using namespace std;
//star triangle  making 
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for (int i =1; i<=n; i++){ 
        for(int j=1 ; j<=i; j++){
        cout <<"* ";

        }
        cout<<endl;
    }
    
}