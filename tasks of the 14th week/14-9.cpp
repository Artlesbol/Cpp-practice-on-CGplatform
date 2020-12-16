#include<iostream>
#include<cstring>
using  namespace std;

class Employee
{
public:
    Employee()
    {
        
        
    }
    ~Employee()
    {
        
    }
};

class Manager:public Employee
{
    char * department;
    char * name;
public:
    Manager(const char * pName , const char * pdepartment):Employee()
    {
        department=new char [strlen(pdepartment)+1];
        strncpy(department,pdepartment,strlen(pdepartment)+1);
        name=new char [strlen(pName)+1];
        strncpy(name,pName,strlen(pName)+1);
    }
    ~Manager()
    {
        delete [] name;
        delete [] department;
    }
    void print()
    {
        cout<<"name:"<<name<<" department:"<<department;
    }
};

int main()
{
    Manager m("Manager","Human Resource");
    m.print();
    return 0;
}