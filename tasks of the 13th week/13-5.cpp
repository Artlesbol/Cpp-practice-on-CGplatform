#include<iostream>
using namespace std;

class Date
{
    public:
        void disp_date()
        {
            cout<<year<<"."<<month<<"."<<day<<endl;
        }
        void set_date(int,int,int);
    private:
        int year;
        int month;
        int day;
};
void Date::set_date(int syear,int smonth,int sday)
{
    year=syear;
    month=smonth;
    day=sday;
}

int main()
{
    Date date;
    int year,month,day;
    cin>>year>>month>>day;
    date.set_date(year,month,day);
    date.disp_date();
    return 0;
}