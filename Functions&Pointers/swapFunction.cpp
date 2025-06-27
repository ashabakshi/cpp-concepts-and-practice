#include<iostream>
using namespace std;
void swap(int & x ,  int & y){// call by reference 1st method
    int temp = x;
    x=y;
    y= temp;
}
int main(){
    int x = 12;
    int y = 23;
    cout <<x<<" "<<y<<endl;
    swap(x,y);
  cout <<x<<" "<<y<<endl;
    


}