#include<iostream>
using namespace std;
void greet(){
    cout<<"HEY"<<endl;
    greet(); //function calling it self - infinitee loop
}
int main(){
    greet();
}