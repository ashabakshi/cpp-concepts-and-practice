#include<iostream>
using namespace std;
//floyd  triangle  making 
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int a = 1;
    for (int i =1; i<=n; i++){ 
        for(int j=1 ; j<=i; j++){
        cout <<a <<" ";
        a++;

        }
        cout<<endl;
    }
    
}