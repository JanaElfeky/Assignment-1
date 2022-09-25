//
//  Road.h
//  Assignent 1
//
//  Created by jana on 17/09/2022.
//

#ifndef Road_h
#define Road_h
#include "Car.h"
#include <iostream>

using namespace std;

class road
{
private:
    char Road_Type;
    int Speed_Limit;
    int Count_A;
    int Count_B;
    int Count_C;
public:
    road();
    road(char Road_Type, int Speed_Limit);
    void SetRoadType(char RoadType);
    void SetSpeedLimit(int SpeedLimit);
    void SetCountA(int Count);
    void SetCountB(int CountB);
    void SetCountC(int CountC);
    char GetRoadType();
    int GetSpeedLimit();
    int  GetCountA();
    int GetCountB();
    int GetCountC();
    bool Radar(int CarSpeed, char RoadType);
    void Allow(string CarType);
    int Age(int YearModel);
};

road::road()
{
    Road_Type=' ';
    Speed_Limit=0;
    Count_A=0;
    Count_B=0;
    Count_C=0;
}
road::road(char RoadType,int SpeedLimit)
{
    Road_Type=RoadType;
    Speed_Limit=SpeedLimit;
    Count_A=0;
    Count_B=0;
    Count_C=0;
}
void road::SetRoadType(char RoadType)
{
    if (RoadType=='A' || RoadType=='B' || RoadType=='C')
        Road_Type=RoadType;
    else
        cout << "Incorrect road type, try again" << endl;
}
void road::SetSpeedLimit(int SpeedLimit)
{
    if (SpeedLimit>0 && SpeedLimit<=250)
        Speed_Limit=SpeedLimit;
    else
        cout << "invalid speed limit, try again" << endl;
}
void road::SetCountA(int CountA)
{
    if (CountA>=0)
        Count_A=CountA;
    else
        cout << "invalid count, try again" << endl;
}
void road::SetCountB(int CountB)
{
    if (CountB>=0)
        Count_B=CountB;
    else
        cout << "invalid count, try again" << endl;
}
void road::SetCountC(int CountC)
{
    if (CountC>=0)
        Count_C=CountC;
    else
        cout << "invalid count, try again" << endl;
}
char road::GetRoadType()
{
    return Road_Type;
}
int road::GetSpeedLimit()
{
    return Speed_Limit;
}
int road::GetCountA()
{
    return Count_A;
}
int road::GetCountB()
{
    return Count_B;
}
int road::GetCountC()
{
    return Count_C;
}
bool road::Radar(int CarSpeed, char RoadType)
{
    if (CarSpeed>Speed_Limit)
        return true;
    else
        return false;
}
void road::Allow(string CarType)
{
    if (CarType=="Private" || CarType=="Motorcycle")
    {
        cout << "Only allowed on road A" << endl;
        Count_A++;
    }
    else if (CarType=="Truck")
    {
        cout << "Only allowed on road C" << endl;
        Count_C++;
    }
    else
    {
        cout << "Only allowed on road B" << endl;
        Count_B++;
    }
}

int road::Age(int YearModel)
{
    return (2022-YearModel);
}


#endif
