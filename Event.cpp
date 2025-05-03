/*
    Codigo implementacion de la clase Event
    Tecnologia: C++

    Fecha de creacion: 17 abril 2025
    Ultima modificacion: 18 abril 2025 3:00 pm

    Autor: Ituriel Liebes Saenz
    ID: 554644
*/
#include <iostream>
#include <string>
#include "Event.h"

Event::Event(){
    this->subject="N/A";
    this->desc="N/A";
}
Event::Event(std::string subject,std::string desc,Person user,Date date,Time timeStart, Time timeEnd){
    this->subject=subject;
    this->desc=desc;
    this->user=user;
    this->date=date;
    this->timeStart=timeStart;
    this->timeEnd=timeEnd;
}
/*
    Setters y getters para cada atributo.
    Aqui obtengo cada atributo como string para facilitar su uso 
    dentro de cadenas de texto al tratarse de objetos!
*/
void Event::setSubject(std::string subject){this->subject=subject;}
void Event::setDesc(std::string desc){this->desc=desc;}
void Event::setUser(Person user){this->user=user;}
void Event::setDate(Date date){this->date=date;}
void Event::setTimeStart(Time timeStart){this->timeStart=timeStart;}
void Event::setTimeEnd(Time timeEnd){this->timeEnd=timeEnd;}
std::string Event::getSubject(){return this->subject;}
std::string Event::getDesc(){return this->desc;}
std::string Event::getUser(){return this->user.toString();}
std::string Event::getDate(){return this->date.toString();}
std::string Event::getTimeStart(){return this->timeStart.toString();}
std::string Event::getTimeEnd(){return this->timeEnd.toString();}
/*
    Metodo toString()
    Para que quede:
    evento - fecha - hora inicio - hora fin - descripcion
*/
std::string Event::toString(){
    return "Evento: " + this->subject + " | Fecha: " + this->date.toString() + 
    " | Hora inicio: " + this->timeStart.toString() + " | Hora de fin: " + this->timeEnd.toString() + 
    " | Descripción: " + this->desc;
}
