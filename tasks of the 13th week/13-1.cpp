#include<iostream>
using namespace std;

class A
{
    static int count;
    public:
        A(){count++;}
    static int showcount(){return count;}
};
int A::count=0;

int main()
{
    A a;
    cout<<A::showcount()<<endl;
    A b;
    cout<<A::showcount()<<endl;
    return 0;
}