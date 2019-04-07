#include "Child.hpp"
#include <iostream>
using namespace std;
Child::Child(){
    this->absence=0;
}
void Child::setName(string name){
    this->name=name;
}
void Child::setSurname(string surname){
    this->surname=surname;
}
void Child::setPESEL(string PESEL){
    this->PESEL=PESEL;
}
void Child::operator++(){
    this->absence=this->absence+1;
}
void Child::setData(){
    string data;
    cout<<"Child name: ";
    cin>>data;
    setName(data);
    cout<<"Child surname: ";
    cin>>data;
    setSurname(data);
    cout<<"Child PESEL: ";
    cin>>data;
    setPESEL(data);
}
void Child::show(){
    cout<<this->name<<" "<<this->surname<<" "<<this->PESEL<<" "<<this->absence;
}
