#include  <iostream>
using  namespace  std;
class  Student{
    private  :
        char  *name;
        int  age;
        char  *no;
    public  :
        Student(char*  name,int  age  ,  char*  no);
        char* getName(){return name;}
        int getAge(){return age;}
        char* getNo(){return no;}
};

Student::Student(char*  na,int  ag  ,  char*  n)
{
    age=ag;
    name=na;
    no=n;
}

int  main()
{
        char  name[20];
        int  age;
        char  no[20];
        cin  >>  name  >>  age  >>  no;
        Student  stu(name,  age,  no);
        cout<<"Name:"<<stu.getName()<<"  Age:"<<stu.getAge()<<"  No:"<<stu.getNo()<<"\n";
        return  0;
}