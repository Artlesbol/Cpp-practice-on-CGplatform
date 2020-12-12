#include<iostream>
using namespace std;

class A
{
    static int count;
    public:
        A(int a,int b){count++;}
    static int showcount(){return count;}
};
int A::count=0;

int main()
{
    A a(1,1);
    cout<<A::showcount()<<endl;
    A b(1,1);
    cout<<A::showcount()<<endl;
    return 0;
}