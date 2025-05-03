#pragma once
#include <string>

class Person{
    protected:
    std::string name,tel,email;
    public:
    Person();
    Person(std::string,std::string,std::string);
    void setName(std::string);
    void setTel(std::string);
    void setEmail(std::string);
    std::string getName();
    std::string getTel();
    std::string getEmail();
    std::string toString();
};