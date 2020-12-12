#include <iostream>      //  包含头文件iostream
#include <cstring>
using namespace std;    //  使用命名空间std

//Engineer类的定义
class Engineer
{
    public:
        Engineer();
        Engineer(int,string,string);
        ~Engineer();
        void printEngineer();
        void setEngineer(int,string,string);
    private:
        int Id;
        string Name;
        string Position;
};
Engineer::Engineer(int id,string name,string posision):Id(id),Name(name),Position(posision)
{

}
Engineer::Engineer():Engineer(0,"NULL","NULL"){};
void Engineer::setEngineer(int id,string name,string posision)
{
    Id=id;
    Name=name;
    Position=posision;
}
Engineer::~Engineer()
{
    cout<<"destructing..."<<endl;
}
void  Engineer::printEngineer  ()
{
    cout<<"id:  "<<Id<<",  name:  "<<Name<<",  position:  "<<Position<<endl;
}
int  main()
{
    Engineer e[4];
    e[0].setEngineer(1001,"wanghan","lecture");    
    e[1].setEngineer(1002,"zhangqing","lecture");
    e[2].setEngineer(1003,"zhaojing","professor");
    e[3].setEngineer(1004,"yaolin","professor");
    Engineer *pE1 =new Engineer(1005,"fangwei","professor");
    Engineer *pE2 =new Engineer(1006,"huangling","professor");
    e[0].printEngineer();
    e[1].printEngineer();
    e[2].printEngineer();
    e[3].printEngineer();
    pE1->printEngineer();
    pE2->printEngineer();
    delete pE1,pE2;
    return 0;
}