#include<iostream>
#include<cstring>
using  namespace std;

class Vehicle
{
    private:
        int wheels;
        int weight;
        int getwheel(){return wheels;}
        int getweight(){return weight;}
    protected:
    string level="vehicle";   
    public:
        void printVehicle(){
            cout<<level<<":"<<endl;
            cout<<"the number of cartwheel:"<<getwheel()<<endl;
            cout<<"weight:"<<getweight()<<"ton"<<endl;
        }
           
        Vehicle(int wh=0,int we=0):wheels(wh),weight(we){level="vehicle";}
};
class Car:private Vehicle
{
    private:
    
        int passenger_load;
        int getpassenger_load(){return passenger_load;}
    public:
        void printCar(){
            printVehicle();
            cout<<"the number of available:"<<getpassenger_load()<<endl;
        }
        Car(int wh=0,int we=0,int pl=0):passenger_load(pl),Vehicle(wh,we){level="car";}
};
class Truck:private Vehicle
{
    private:
        int passenger_load;
        int payload;
        int getpassenger_load(){return passenger_load;}
        int getpayload(){return payload;}
    public:
        void printTruck(){
            printVehicle();
            cout<<"the number of available:"<<getpassenger_load()<<endl;
            cout<<"load:"<<getpayload()<<"ton"<<endl;
        }
        Truck(int wh=0,int we=0,int pl=0,int pld=0):passenger_load(pl),payload(pld),Vehicle(wh,we){level="truck";}
};

int main()
{
    Vehicle V(8,5);
    Car C(4,1,5);
    Truck T(6,8,2,10);
    V.printVehicle();
    C.printCar();
    T.printTruck();
    return 0;
}