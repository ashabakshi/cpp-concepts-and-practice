#include <iostream>
using namespace std;
int main(){
 int arr[]={2,4,6,8,10,12};
 int mx  = arr[0];
 for(int i=0;i<=5; i++){
    mx = max(mx,arr[i]);
 }
 cout<<mx; 

}