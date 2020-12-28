#include  <iostream>
using  namespace  std;
class Date{
private:
	int m_year;
	int m_month;
	int m_day;
public:
	Date(int year, int month, int day){
                m_year = year;
		m_month = month;
		m_day = day;
        }
 int getYear()const
        {
        	return m_year;
		}
		 int getMonth()const
        {
        	return m_month;
		}
		int getDay()const 
        {
        	return m_day;
		}

};
void printDate(const Date &d){
	 cout << d.getYear() << "/" 
                 << d.getMonth() << "/"   
                 << d.getDay() << '\n';
}
int main(){
	Date day1(2020, 12, 13);
	printDate(day1);
	return 0;
}


