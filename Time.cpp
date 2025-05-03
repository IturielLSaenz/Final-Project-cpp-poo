#include <iostream>
#include <string>
#include <iomanip>
#include "Time.h"
Time::Time(){ // constructor default
    this->hour=0;
    this->minute=0;
    this->second=0;
}
Time::Time(int hour,int minute,int second){
    this->setHour(hour);
    this->setMinute(minute);
    this->setSecond(second);
}
void Time::setHour(int hour){
    this->hour = (hour>=0 && hour<12) ? hour:0;
}
void Time::setMinute(int minute){
    this->minute = (minute>=0 && minute<=59) ? minute:0;
}
void Time::setSecond(int second){
    this->second = (second>=0 && second<=59) ? second:0;
}
int Time::getHour(){return this->hour;}
int Time::getMinute(){return this->minute;}
int Time::getSecond(){return this->second;}
/*
    Metodos para incrementar y decrementar cada atributo.
*/
void Time::incrementHour(int n){ //n es el numero a incrementar
    if(this->hour+n <= 11){
        this->hour+=n;
    }else{
        this->hour=0 + (n-1);
    }
}
void Time::incrementMinute(int n){ //n es el numero a incrementra
    if(this->minute+n<=59){
        this->minute+=n;
    }else{
        this->minute=0 + (n-1);
        this->hour = (this->hour+1<=11) ? ++this->hour:0; //calculo de hora
    }
}
void Time::incrementSecond(int n){
    if(this->second+n<=59){
        this->second+=n;
    }else{
        this->second=0 + (n-1);
        if(this->minute+1<=59){
            this->minute++;
        }else{
            this->minute=0 + (n-1);
            this->hour = (this->hour+1<=11) ? ++this->hour:0; //calculo de hora nuevamente
        }
    }
}
void Time::decrementHour(int n){
    if(this->hour-n>=0){
        this->hour-=n;
    }else{
        this->hour=12 - (n-1);
    }
}
void Time::decrementMinute(int n){
    if(this->minute-n>0){
        this->minute--;
    }else{
        this->minute=59 - (n-1);
        this->hour = (this->hour-1 > 0) ? --this->hour:12;
    }
}
void Time::decrementSecond(int n){
    if(this->second - n > 0){
        this->second--;
    }else{
        this->second=59 - (n-1);
        if(this->minute-1 > 0){
            this->minute--;
        }else{
            this->minute=59;
            this->hour = (this->hour-1 > 0) ? --this->hour:12;
        }
    }
}
std::string Time::toString(){
    /*
        Para el toString primero creo una variable para cada atributo que guarde el valor en tipo string
        después se compara si el valor (numérico original) es menor a diez, si es menor a diez le agregamos un cero antes del numero
        para tener un formato de dos digitos aun teniendo numeros por debajo de diez.
    */
    std::string str_hour = std::to_string(this->hour);
    std::string str_minute = std::to_string(this->minute);
    std::string str_second = std::to_string(this->second);

    if(this->hour<10){ str_hour = '0' + str_hour;}
    if(this->minute<10){ str_minute = '0' + str_minute;}
    if(this->second<10){str_second = '0' + str_second;}
    //formato reloj:
    return str_hour+":"+str_minute+":"+str_second;
}