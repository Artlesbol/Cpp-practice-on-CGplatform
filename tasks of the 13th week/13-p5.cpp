#include  <iostream>
using namespace std;
class A
{
public:  
    static  int  count;
    A(int x,int y){count++;} 	
    int showcount(){return count;}
};
int A::count=0;

int  main()
{
    A  a(1,2);
    cout<<a.showcount()<<endl;
    A  b(1,2);
    cout<<b.showcount()<<endl;
    return  0;
}