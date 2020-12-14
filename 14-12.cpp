#include<iostream>
#include<cstring>
using  namespace std;

class Publication
{
    public:
        void display(){
            cout<<name<<" "<<price<<" "<<date<<endl;
        }
        ~Publication(){}
        void inputData(string n="None",int p=0,string d="None"){name=n;price=p;date=d;}
        Publication(string n="None",int p=0,string d="None"):name(n),price(p),date(d){}
    protected:
        string name;
        int price;
        string date;
};
class Book:private Publication
{
    public:
        void display(){
            cout<<name<<" "<<price<<" "<<date<<" "<<page<<endl;
        }
        Publication::inputData;
        Book(string n="None",int p=0,string d="None",int pa=0):page(pa),Publication(n,p,d){}
        ~Book(){}
    protected:
        int page;
};
class Tape:private Publication
{
    public:
        void display(){
            cout<<name<<" "<<price<<" "<<date<<" "<<playtime<<endl;
        }
        Publication::inputData;
        Tape(string n="None",int p=0,string d="None",string pt=0):playtime(pt),Publication(n,p,d){}
        ~Tape(){}
    protected:
        string playtime;
};


int main()
{
    Publication p("Publication",120,"1999-2-1");
    p.display();
    Book b("Book",30,"2009-1-1",300);
    b.display();
    Tape t("Tape",15,"2003-5-1","00:48:10");
    t.display();

    return 0;
}