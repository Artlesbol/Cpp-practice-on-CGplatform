#include <iostream>
#include <cstring> 
using namespace std;
class Simple{
private:
      char* m_name;
public:
	  ~Simple(){
	  	delete m_name;
	  	m_name = 0;
	  }
Simple(Simple &a)
{
	m_name=new char [strlen(a.m_name)+1];
	strncpy(m_name,a.m_name,strlen(a.m_name)+1);
}
 Simple(const char* name)
 {
 	m_name=new char [strlen(name)+1];
 	strncpy(m_name,name,strlen(name)+1);
 }
 char* getName()
 {
 	return m_name;
 }

};
class Base{
private:
      char m_x;
public:
Base(const char _x)
{
 	m_x=_x;
}
~Base()
{
	
}
char getX()
{
	return m_x;
}

};
class Derived: public Base{
private:
       double m_y;
       Simple m_s;
public:
       void print(){
            cout << m_s.getName() << " "
                 << m_y << " "
                 << getX() << endl;
       }
Derived(Derived &a):Base(a.getX()),m_s(a.m_s)
{
	m_y=a.m_y;
}
Derived(const char* name="none",double y=100,const char x='X'):m_y(y),Base(x),m_s(name)
{
	
}

};
int main()
{
       Derived d1("Tom", 90.7, 'M');
       d1.print();
       
       Derived d2(d1);
       d2.print();
       
       Derived d3("Jerry", 88.5);
       d3.print();
       
       Derived d4("Mary");
       d4.print();
       
       return 0;
}


