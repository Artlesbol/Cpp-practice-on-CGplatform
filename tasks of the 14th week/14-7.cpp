#include<iostream>
#include<cstring>
using  namespace std;

class Document
{
    private:
        char *Name;
    public:
        Document(const char *name="None")
        {
            Name=new char [strlen(name)+1];
            strncpy(Name,name,strlen(name)+1);
        }
        ~Document()
        {
            delete [] Name;
        }
        void PrintNameOf()
        {
            cout<<"Name of book: "<<Name;
        }
};
class Book:public Document
{
    private:
        int PageCount;
    public:
        Book(const char *name="None",int pagecount=0):PageCount(pagecount),Document(name){}

};

int main()
{
    string d;
    cin>>d;
    char b[20];
    int p;
    cin>>b>>p;
    Book B(b,p);
    B.PrintNameOf();
    return 0;
}