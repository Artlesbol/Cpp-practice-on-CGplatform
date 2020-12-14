#include<iostream>
using namespace std;
class A 
{ 
public: int n; 
}; 
class B:public A{}; 
class C:public A{}; 
class D:public B,public C 
{ 
    int getn()  {return B::n; } 
}; 
int main() 
{ 
	D d; 
	d.B::n=10; 
	cout<<d.B::n<<endl; 
	return 0;
}
