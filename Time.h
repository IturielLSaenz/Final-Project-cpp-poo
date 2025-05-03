#pragma once
#include <string>

class Time{
    protected:
    int hour,minute,second;
    public:
    Time();
    Time(int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
    //metodos para incrementar y decrementar:
    void incrementHour(int);
    void incrementMinute(int);
    void incrementSecond(int);
    void decrementHour(int);
    void decrementMinute(int);
    void decrementSecond(int);
    //toString
    std::string toString();
};
