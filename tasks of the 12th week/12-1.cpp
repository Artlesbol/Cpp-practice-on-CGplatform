#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

class Student
{
    public:
        Student(int,int,string);
        void print();
    private:
        int number;
        string name;
        int age;
    protected:
};
Student::Student(int n,int a,string N)
{
    number=n;
    age=a;
    name=N;
}
void Student::print()
{
    cout<<"Name:"<<this->name<<" ";
    cout<<"Age:"<<this->age<<" ";
    cout<<"No:"<<this->number<<endl;
}

int main()
{
    int n,a;
    string N;
    cin>>N>>a>>n;
    Student s1(n,a,N);
    s1.print();
    return 0;
}