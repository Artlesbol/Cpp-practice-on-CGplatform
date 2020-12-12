#include<iostream>
#include<iomanip>
using  namespace  std;
class  Student
{
        public:
        void  input();
        void  display();
        private:
        int  num;
        double  cj;
};
void  Student::input()
{
    cin>>num>>cj;
}
void  Student::  display()
{
    cout<<"num = "<<num<<" cj = "<<cj<<endl;
}
int  main()
{
    const  int  NUM=10;
    Student  stud[NUM];
    int  n,i;
    cin>>n;
    for(i=0;  i<n;  i++)
        stud[i].input();
    cout<<setiosflags(ios::fixed);
    cout<<setprecision(2);
    Student  *p=stud;
    for(i=0;  i<n;  p+=2,i+=2)
            p->display();
    return  0;
}