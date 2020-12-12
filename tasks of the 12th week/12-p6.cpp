#include <iostream>      //  包含头文件iostream
#include <cstring>
using namespace std;    //  使用命名空间std
class Employee
{
    public:
        Employee(int pId,char* pName,char pSex,char* pPosition);
        ~Employee();
        void printEmployee();
        void setSex(char  pSex);
    private:
        int id;          //  学号
        char* name;      //  姓名字符指针变量
        char sex;        //  性别
        char* position;  //  职位
};

//构造函数定义
Employee::Employee(int pId,char* pName,char pSex,char* pPosition)
{
    name=new char [strlen(pName)+1];
    position=new char[strlen(pPosition)+1];
    strncpy(name,pName,strlen(pName)+1);
    strncpy(position,pPosition,strlen(pPosition)+1);
    id=pId;
    sex=pSex;
}

Employee::~Employee(){
      delete[] name;
      name=0;
      delete[] position;
      position = 0;
}

inline void Employee::printEmployee()
{
    cout<<"id:  "<<id<<",  "<<"name:  "<<name<<",  "
        <<  "sex:  "<<sex<<",  "<<"position:  "<<position<<endl  ;
}
//  修改性别的函数
void Employee::setSex(char pSex='M')
{
    sex=pSex;
}

int  main()
{
    Employee  emp(1001,"zhangxiao",'F',"manager");
    emp.printEmployee();
    emp.setSex();
    emp.printEmployee();
    return  0;
}