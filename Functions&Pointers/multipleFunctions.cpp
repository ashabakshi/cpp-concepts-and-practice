#include <iostream>
using namespace std;
void usa (){
    cout<<"You are in USA"<<endl;
   
}
void india(){
    cout<<"You are in India "<<endl;
    usa();
}

int main(){
 india();
    return 0;
}