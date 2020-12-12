#include  <iostream>      
#include  <cstring>
using  namespace  std;    
class  Manager
{
    public:
    friend void printManager(Manager&  manager);
    Manager(int  pId,char*  pName,int  pAge);
    ~Manager();
    private:
    int id;
    char *name;
    int age;
    
};
Manager::Manager(int  pId,char*  pName,int  pAge)
{
    name=new char [strlen(pName)+1];
    strncpy(name,pName,strlen(pName)+1);
    id=pId;
    age=pAge;
    cout<<"Constructed  with  all  parameters."<<endl;
}
Manager::~Manager()
{
    delete [] name;
    cout<<"Deconstructed."<<endl;
}
void  printManager(Manager& manager)
{
    cout<<"id:  "<<manager.id<<",  "
    <<"name:  "<<manager.name<<",  "
    <<"age:  "<<manager.age<<endl;
    }
int  main()
{
    Manager  m1(1001,"zhangsan",22);
    printManager(m1);
    return  0;
}
