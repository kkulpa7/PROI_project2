#include "Teacher.hpp"
#include <iostream>
using namespace std;
void Teacher::setName(string name){
    this->name=new string;
    *(this->name)=name;
}
void Teacher::setSurname(string surname){
    this->surname=new string;
    *(this->surname)=surname;
}
void Teacher::setAcademicDegree(string academicDegree){
    this->academicDegree=new string;
    *(this->academicDegree)=academicDegree;
}
void Teacher::setData(){
    string data;
    cout<<"Teacher name: ";
    cin>>data;
    setName(data);
    cout<<"Teacher surname: ";
    cin>>data;
    setSurname(data);
    cout<<"Teacher academic degree: ";
    cin>>data;
    setAcademicDegree(data);
}
void Teacher::show(){
    cout<<*(this->academicDegree)<<" "<<*(this->name)<<" "<<*(this->surname);
}
/*Teacher::~Teacher(){
	delete this->name;
	delete this->surname;
	delete this->academicDegree;
}*/
