#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int y = 23;
    cout <<x<<" "<<y<<endl;
    // //method 1 
    // int temp = x;
    // int x= y;
    // y = temp;
     x=x+y;
     y=x-y;
     x=x-y;
  cout <<x<<" "<<y<<endl;
    


}