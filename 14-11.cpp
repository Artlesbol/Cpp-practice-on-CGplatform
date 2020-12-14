#include<iostream>
#include<cstring>
using  namespace std;

class Bed
{
    public:
        void printbed(){
            cout<<"Sleeping"<<endl;
        }
};
class Sofa
{
    public:
        void printsofa(){
            cout<<"Watching"<<endl;
        }
};
class SleeperSofa:private Sofa,private Bed
{
    public:
        void Foldout()
        {
            flag=(!flag);
            cout<<"Fold out"<<endl;
        }
        void Printstate()
        {
            if(flag)  printsofa();
            else      printbed();
        }
    private:
        bool flag=1;
};

int main()
{
    SleeperSofa s;
    s.Printstate();
    s.Foldout();
    s.Printstate();
    return 0;
}