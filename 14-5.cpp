#include<iostream>
#include<cstring>
using  namespace std;
class Person
{
    public:
        Person(string _tel="NONE",string _name="NONE"):tel(_tel),name(_name){}
        string gettel(){return tel;}
        string getname(){return name;}
        friend ostream & operator <<(ostream & out,Person & a);
    private:
        string tel;
        string name;
};
class Student:virtual public Person
{
    public:
        Student(string _major_learn="NONE",string _tel="NONE",string _name="NONE"):major_learn(_major_learn),Person(_tel,_name){}
        string getmajorlearn(){return major_learn;}
    private:
        string major_learn;
};
class Teacher:virtual public Person
{
    public:
        Teacher(string _major_teach="NONE",string _tel="NONE",string _name="NONE"):major_teach(_major_teach),Person(_tel,_name){}
        string getmajorteach(){return major_teach;}
    private:
        string major_teach;
    
};
class StudentTeacher:public Student,public Teacher
{
    public:
        StudentTeacher(string _tel="NONE",string _name="NONE",string _major_teach="NONE",string _major_learn="NONE"):Teacher(_major_teach,_tel,_name),Student(_major_learn,_tel,_name),Person(_tel,_name){}
    
};
ostream & operator <<(ostream & out,StudentTeacher & a)
{
    out<<a.getname()<<endl<<a.gettel()<<endl<<a.getmajorlearn()<<endl<<a.getmajorteach();
    return out;
}
int main()
{   
    string name,tel,major_learn,major_teach;
    cin>>name>>tel>>major_learn>>major_teach;
    StudentTeacher ST(tel,name,major_teach,major_learn);
    cout<<ST;
    return 0;
}