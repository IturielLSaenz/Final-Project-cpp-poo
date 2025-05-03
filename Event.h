#include <string>
#include "Date.h"
#include "Time.h"
#include "Person.h"

class Event{
    //atributos
    protected:
    std::string subject,desc;
    Person user;
    Date date;
    Time timeStart;
    Time timeEnd;
    public:
    Event();
    Event(std::string,std::string,Person,Date,Time,Time);
    void setSubject(std::string);
    void setDesc(std::string);
    void setUser(Person);
    void setDate(Date);
    void setTimeStart(Time);
    void setTimeEnd(Time);
    std::string getSubject();
    std::string getDesc();
    std::string getUser();
    std::string getDate();
    std::string getTimeStart();
    std::string getTimeEnd();
    std::string toString();
};