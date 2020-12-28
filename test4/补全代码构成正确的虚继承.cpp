#include <iostream>
using namespace std;
class PoweredDevice{
protected:
    int m_power;
public:
	PoweredDevice(int power):m_power(power){
	}
        void print(){
    	       cout << "PoweredDevice: " << m_power << endl;
	}
};
class Scanner:virtual public PoweredDevice
  {
protected:
	int m_scan;
public:
	void print(){
		cout << "scanner: " 
		     << m_power << " "
		     << m_scan << endl;
	}
Scanner(int power,int scan):PoweredDevice(power),m_scan(scan){}

};
class Printer:virtual public PoweredDevice
 {
protected:
	int m_prin;
public:
	int print(){
		cout << "printer: "
		     << m_power << " " 
		     << m_prin << endl;
	}
Printer(int power,int prin):PoweredDevice(power),m_prin(prin){}

};
class Copier:public Printer,public Scanner
 {
protected:
	int m_copy;
public:
Copier(int power,int scan,int prin, int copy):m_copy(copy),Scanner(power,scan),Printer(power,prin),PoweredDevice(power){}

	void print(){
		cout << "Copier: " 
		     << m_power << " "
		     << m_scan << " "
			 << m_prin << " "
			 << m_copy << endl; 
	}
};

int main()
{
        Copier c1(1,2,3,4);
	c1.print();
	
	Scanner s1(10,20);
	s1.print();
	
	PoweredDevice p1(900);
	p1.print();
	
	return 0;
}


