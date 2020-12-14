#include<iostream>
using  namespace  std;

class Bed{
public:
    Bed(){}
    void  Sleep()
    {
            cout  <<  "Sleeping"  <<  endl;
    }
};
class Sofa{
public:
    Sofa(){}
    void  WatchTV()
    {
            cout  <<  "Watching"  <<  endl;
    }
};
class SleeperSofa:public Bed,public Sofa{
public:
    void FoldOut(){
        cout<<"Fold out"<<endl;
    }
};

int  main()
{
    SleeperSofa  ss;
    ss.WatchTV();
    ss.FoldOut();
    ss.Sleep();
    return  0;
}