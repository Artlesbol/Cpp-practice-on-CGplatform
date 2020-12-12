#include<iostream>
using namespace std;

class A
{
    static int count;
    public:
        A(){count++;}
        ~A(){count--;showcount();}
        void showcount(){cout << count << endl;}
};
int A::count=0;
int main()
{
    A a;
    a.showcount();
    return 0;
}