#include<iostream>
using namespace std;

class Ration
{
    public:
    Ration Add(Ration B);
    Ration Sub(Ration B);
    Ration Mul(Ration B);
    Ration Div(Ration B);
    void print(){cout<<numerator<<"/"<<denominator<<endl;}
    void Printfloat(){cout<<(float)numerator/(float)denominator<<endl;}
    Ration(int den,int num){numerator=num;denominator=den;}
    Ration(){numerator=0;denominator=0;};
    private:
    int numerator;//分子
    int denominator;//分母
};

Ration Ration::Add(Ration B)
{
    Ration ans;
    ans.numerator=B.numerator*denominator+numerator*B.denominator;
    ans.denominator=B.denominator*denominator;
    return ans;
}
Ration Ration::Sub(Ration B)
{
    Ration ans;
    ans.numerator=numerator*B.denominator-B.numerator*denominator;
    ans.denominator=B.denominator*denominator;
    return ans;
}
Ration Ration::Mul(Ration B)
{
    Ration ans;
    ans.numerator=B.numerator*numerator;
    ans.denominator=B.denominator*denominator;
    return ans;
}
Ration Ration::Div(Ration B)
{
    Ration ans;
    ans.numerator=numerator*B.denominator;
    ans.denominator=B.numerator*denominator;
    return ans;
}
int getint()
{
    int temp;
    cin>>temp;
    return temp;
}
int main()
{
    Ration ans,a(getint(),getint()),b(getint(),getint());
    (a.Add(b)).print();
    (a.Sub(b)).Printfloat();
    (a.Mul(b)).print();
    (a.Div(b)).Printfloat();
    return 0;
}