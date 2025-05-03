/*
    Definicion clase Agenda
    Tecnologia: C

    Fecha creacion: 18 abril 2025 3:01 pm
    Ultima fecha de modificacion: 18 abril 2025 3:06 pm

    Autor: Ituriel Liebes Saenz
    ID: 554644
*/
#include <string>
#include <vector>
#include "Person.h"
#include "Date.h"
#include "Time.h"
#include "Event.h"

class Agenda{
    protected:
    Person owner;
    std::vector<Event> events = std::vector<Event>(5);
    public:
    Agenda(Person);
    void setOwner(Person);
    Person getOwner();
    void addEvent(Event);
    void removeEvent(Date,Time,Time);
    std::string show();
    std::string getEventList();
    Event getEventAtIndex(int);
};