#include <iostream>
#include <string>
#include "Date.h"

Date::Date(){ //constructor default
    this->year=1900;
    this->month=1;
    this->day=1;
}
Date::Date(int year,int month,int day){
    this->setYear(year);
    this->setMonth(month);
    this->setDay(day);
}
void Date::setYear(int year){
    if(year<1900){
        std::cout<<"No puedes ingresar un año menor al 1900, estableciendo por default: 1900"<<std::endl;
        this->year=1900;
    }else{
        this->year=year;
    }
}
void Date::setMonth(int month){
    if(month>=1 and month<=12){
        this->month=month;
    }else{
        std::cout<<"El mes debe estar entre 1 y 12! (estableciendo 1 por default)"<<std::endl;
        this->month=1;
    }
}
void Date::setDay(int day){
    if(this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
        if(day>0 and day<=31){
            this->day=day;
        }else{
            std::cout<<"Este mes solo puede tener 31 días! (insertando default: 1)"<<std::endl;
            this->day=1;
        }
    }else if(this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
        if(day>0 and day<=30){
            this->day=day;
        }else{
            std::cout<<"Este mes solo puede tener 30 días! (insertando default: 1)"<<std::endl;
            this->day=1;
        }
    }else if(this->month==2){
        if(this->isLeapYear() && (day>0 && day<=29)){
            this->day=day;
        }else if(!this->isLeapYear() && (day>0 && day<=28)){
            this->day=day;
        }else{
            std::cout<<"Este es un valor inválido para este mes y año! -> default: 1"<<std::endl;
            this->day=1;
        }
    }
}
int Date::getYear(){return this->year;}
int Date::getMonth(){return this->month;}
int Date::getDay(){return this->day;}
//metodos adicionales:
void Date::incrementDay(){ 
    int limite;
    if(this->month==2){
        limite = isLeapYear ? 29:28; //si es verdadero = 29 ; si no = 28!
    }else if(this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){ //si es un mes con 30 días
        limite = 30;
    }else{
        limite = 31;
    }
    if(this->day < limite){
        this->day++;
    }else{
        this->day=1;
        if(this->month<12){
            this->month++;
        }else{
            this->month=1;
            this-year++;
        }
    }
}
void Date::incrementMonth(){
    if(this->month<12){
        this->month++;
    }else{
        this->month=1;
        this->year++;
    }
}
void Date::incrementYear(){
    this->year++;
}
void Date::decrementDay(){
    if(this->day>1){
        this->day--;
    }else{ //si dia es 1, restarle significa regresar al mes pasado:
        if (month == 2) {
            day = isLeapYear() ? 29 : 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            day = 30;
        } else {
            day = 31;
        }
    }
}
void Date::decrementMonth(){
    if(this->month>1){
        this->month--;
    }else{
        this->month=12;
        this->year--;
    }
}
bool Date::isLeapYear(){
    if(this->year%4==0 && (this->year%100!=0)||(this->year%400==0)){
        return true;
    }else{
        return false;
    }
}
std::string Date::toString(){
    std::string str_day = std::to_string(this->day);
    std::string str_month = std::to_string(this->month);
    std::string str_year = std::to_string(this->year);
    //creando el formato:
    if(this->day<10){str_day = '0' + str_day;}
    if(this->month<10){str_month = '0' + str_month;}
    return str_day+"/"+str_month+"/"+str_year;
}