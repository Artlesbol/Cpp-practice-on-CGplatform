#include <iostream>      //  包含头文件iostream
#include <cstring>
using namespace std;    //  使用命名空间std
class Car
{
    public:
        //  成员函数申明
        Car();
        Car(int pId,const char *pBrand,float pPower,int pNumOfPersons);
        Car(Car&  car);
        ~Car();
        void printCar();
        void setId(int  pId);
    private:
        int  id;
        char* brand;
        float  power;
        int  numOfPersons;
};
Car::Car()
{          
    cout<<"Constructed  without  any  parameter."<<endl;
}
Car::Car(int pId,const char *pBrand,float pPower,int pNumOfPersons)
{
    brand=new char [strlen(pBrand)+1];
    id=pId;
    memcpy(brand, pBrand, (int)(strlen(pBrand) + 1));
    power=pPower;
    numOfPersons=pNumOfPersons;
    cout<<"Constructed  with  all  parameters."<<endl;
}
Car::Car(Car &car)
{
    brand = new char [strlen(car.brand)+1];
    memcpy(brand,car.brand,(int)(strlen(car.brand)+1));
    id=car.id;
    power=car.power;
    numOfPersons=car.numOfPersons;
    cout<<"Deep  Constucted."<<endl;
}
Car::~Car()
{          
    delete[] brand;
    cout<<"Deconstructed."<<endl;
}
void  Car::printCar()
{            
    cout<<"id:  "<<id<<",  "
    <<"brand:  "<<brand<<",  "
    <<"power:  "<<power<<",  "
    <<"numOfPersons:  "<<numOfPersons<<endl;
}
void  Car::setId(int  pId)
{
    id=pId;
}
int  main()
{          
    Car  car1(1001,"Toyota",1.8f,5);
    Car  car2(car1);
    car2.setId(1002);
    Car  car3=car1;
    car3.setId(1003);
    car1.printCar();
    car2.printCar();
    car3.printCar();
    return  0;
}
