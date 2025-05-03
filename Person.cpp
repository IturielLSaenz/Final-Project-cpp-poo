#include <iostream>
#include <string>
#include "Person.h"
Person::Person(){
    this->name="N/A";
    this->tel="N/A";
    this->email="N/A";
}
Person::Person(std::string name,std::string tel,std::string email){
    this->name=name;
    this->tel=tel;
    this->email=email;
}
void Person::setName(std::string name){
    this->name=name;
}
void Person::setTel(std::string tel){
    this->tel=tel;
}
void Person::setEmail(std::string email){
    this->email=email;
}
std::string Person::getName(){
    return this->name;
}
std::string Person::getTel(){
    return this->tel;
}
std::string Person::getEmail(){
    return this->email;
}
std::string Person::toString(){
    return "Nombre: " + this->name + " | TEL: " + this->tel + " | Email: " + this->email;
}