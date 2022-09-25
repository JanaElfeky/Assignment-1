//
//  main.cpp
//  Assignent 1
//
//  Created by jana on 17/09/2022.
//

#include <iostream>
#include <queue>
#include <deque>
#include "Car.h"
#include "Road.h"

using namespace std;

void efficiency (double HighestNumber, road RoadA)
{
    if (HighestNumber!=0)
    {
        cout << "RoadA efficiency is " << ((RoadA.GetCountA()/HighestNumber)*100) << "%" << endl;
        cout << "RoadB efficiency is " << ((RoadA.GetCountB()/HighestNumber)*100) << "%" << endl;
        cout << "RoadC efficiency is " << ((RoadA.GetCountC()/HighestNumber)*100) << "%" << endl;
    }
    else
        cout << "no cars passed on any roads" << endl;
}

int main()
{
    car car1("Toyota",86,2013);
    car car2("Ferrari",130,2020);
    car car3("Nissan",43,2018);
    car car4("Porche",95,2015);
    car car5("Hyundai",39,2017);
    car car6("Audi",128,2010);
    car car7("Mercedes",140,2011);
    car car8("BMW",160,2021);
    car1.SetType("Truck");
    car2.SetType("Bus");
    car3.SetType("Private");
    car4.SetType("Bus");
    car5.SetType("Bus");
    car6.SetType("Motorcycle");
    car7.SetType("Bus");
    car8.SetType("Bus");
    car1.SetPlate("1234");
    car2.SetPlate("3554");
    car3.SetPlate("2455");
    car4.SetPlate("5477");
    car5.SetPlate("4543");
    car6.SetPlate("2456");
    car7.SetPlate("2342");
    car8.SetPlate("1345");
    queue<car> cars;
    cars.push(car1);
    cars.push(car2);
    cars.push(car3);
    cars.push(car4);
    cars.push(car5);
    cars.push(car6);
    cars.push(car7);
    cars.push(car8);
    road roadA('A',60);
    road roadB('B', 90);
    road roadC('C',120);
    
    for (int i=0;i<8;i++)
    {
        roadA.Allow((cars.front()).GetType());
        if (roadA.Radar((cars.front()).GetSpeed(),'A'))
        {
            cout << "This car will be fined. It is a " << ((cars.front()).GetType()) << " vehicle, it was going " << ((cars.front()).GetSpeed()) << "km/h, it is a " << ((cars.front()).GetBrand()) << " made in " << ((cars.front()).GetYearModel()) << " and its plate number is " << ((cars.front()).GetPlate()) << endl;
        }
        else if (roadB.Radar((cars.front()).GetSpeed(),'B'))
        {
            cout << "This car will be fined. It is a " << ((cars.front()).GetType()) << " vehicle, it was going " << ((cars.front()).GetSpeed()) << "km/h, it is a " << ((cars.front()).GetBrand()) << " made in " << ((cars.front()).GetYearModel()) << " and its plate number is " << ((cars.front()).GetPlate()) << endl;
        }
        else if (roadC.Radar((cars.front()).GetSpeed(),'C'))
        {
            cout << "This car will be fined. It is a " << ((cars.front()).GetType()) << " vehicle, it was going " << ((cars.front()).GetSpeed()) << "km/h, it is a " << ((cars.front()).GetBrand()) << " made in " << ((cars.front()).GetYearModel()) << " and its plate number is " << ((cars.front()).GetPlate()) << endl;
        }
        roadA.Age((cars.front().GetYearModel()));
        roadB.Age((cars.front().GetYearModel()));
        roadC.Age((cars.front().GetYearModel()));
        cars.pop();
    }
    
    double highestRoadNumber=0;
    if (roadA.GetCountA()>=roadA.GetCountB() && roadA.GetCountA()>=roadA.GetCountC())
        highestRoadNumber=roadA.GetCountA();
    else if (roadA.GetCountB()>=roadA.GetCountA() && roadA.GetCountB()>=roadA.GetCountC())
        highestRoadNumber=roadA.GetCountB();
    else if (roadA.GetCountC()>=roadA.GetCountA() && roadA.GetCountC()>=roadA.GetCountB())
        highestRoadNumber=roadA.GetCountC();
    
    efficiency(highestRoadNumber, roadA);
    
    return 0;
}

