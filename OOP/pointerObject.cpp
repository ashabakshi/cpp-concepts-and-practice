#include <iostream>
using namespace std;
class Cricketer
{
public:
    string name;
    int runs;

    Cricketer(string name, int runs)
    {
        this->name = name;
        this->runs = runs;
    }
};
void change(Cricketer* c){

   // (*c).runs = 20000;
   c-> runs =18000;
}
int main()
{
    Cricketer c1("Virat Kohli", 25000);
    cout<<c1.runs<<endl;
    change(&c1);
    cout<<c1.runs<<endl;
  //  Cricketer c2("Rohit Sharma", 18000);
    // Cricketer* p1=&c1;
    // cout<<(*p1).runs<<endl;
}