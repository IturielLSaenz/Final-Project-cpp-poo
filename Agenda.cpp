/*
    Implementacion clase Agenda
    Tecnologia: C++

    Fecha de creacion: 18 abril 2025 3:07 pm
    Ultima fecha de modificacion: 

    Autor: Ituriel Liebes Saenz
    ID: 554644
*/
#include <iostream>
#include <string>
#include "Agenda.h"

Agenda::Agenda(Person owner){
    this->owner=owner;
}
void Agenda::setOwner(Person owner){this->owner=owner;}
Person Agenda::getOwner(){return this->owner;}
/*
    Metodos esenciales @ clase Agenda
*/
void Agenda::addEvent(Event evento){
    for(size_t i = 0;i<events.size(); i++){
        if(events[i] == Event()){ // Assuming Event has a default constructor and operator==
            events[i] = evento;
        }
    }
    std::cout<<"Agenda llena, no se pudo añadir un evento!"<<std::endl;
}