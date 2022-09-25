//
//  Car.h
//  Assignent 1
//
//  Created by jana on 17/09/2022.
//


#ifndef Car_h
#define Car_h
#include <iostream>

using namespace std;

class car
{
private:
    string Car_Brand;
    string Car_Type;
    string Car_Plate;
    int Car_Speed;
    int Year_Model;
public:
    car();
    car(string Car_Brand, int Speed, int Year_Model);
    void SetBrand (string Brand);
    void SetType(string Typre);
    void SetPlate(string Plate);
    void SetSpeed(int Speed);
    void SetYearModel(int YearModel);
    string GetBrand();
    string GetType();
    string GetPlate();
    int GetSpeed();
    int GetYearModel();
};


car::car(string CarBrand, int Speed,int YearModel)
{
    Car_Type = " ";
    Car_Brand=CarBrand;
    Car_Plate = " ";
    Car_Speed=Speed;
    Year_Model=YearModel;
}
car::car()
{
    Car_Type = " ";
    Car_Brand=" ";
    Car_Plate = " ";
    Car_Speed=0;
    Year_Model=0;
}
void car::SetBrand(string Brand)
{
    Car_Brand=Brand;
}
void car::SetType(string Type)
{
    if (Type=="Private" || Type=="Motorcycle" || Type=="Bus" || Type=="Truck")
        Car_Type=Type;
    else
        cout << "invalid vehicle type, try again" << endl;
}
void car::SetPlate(string Plate)
{
    Car_Plate=Plate;
}
void car::SetSpeed(int Speed)
{
    if (Speed>=0 && Speed<300)
        Car_Speed=Speed;
    else
        cout << "invalid car speed, try again" << endl;
}
void car::SetYearModel(int YearModel)
{
    Year_Model=YearModel;
}
string car::GetBrand()
{
    return Car_Brand;
}
string car::GetType()
{
    return Car_Type;
}
string car::GetPlate()
{
    return Car_Plate;
}
int car::GetSpeed()
{
    return Car_Speed;
}
int car::GetYearModel()
{
    return Year_Model;
}

#endif
