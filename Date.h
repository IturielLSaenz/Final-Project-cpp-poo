#pragma once
#include <string>

class Date{
    protected:
    int year,month,day;
    public:
    Date();
    Date(int,int,int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    int getYear();
    int getMonth();
    int getDay();
    /*- Metodos adicionales -
    Incrementar:*/
    void incrementDay();
    void incrementMonth();
    void incrementYear();
    //Decrementos:
    void decrementDay();
    void decrementMonth();
    void decrementYear();
    std::string toString();
    bool isLeapYear();
};