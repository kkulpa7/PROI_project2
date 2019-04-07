#ifndef NURSERYSCHOOL_HPP
#define NURSERYSCHOOL_HPP
#include "Group.hpp"
#include <iostream>
template <typename T>
class NurserySchool{
private:
    T ID;
    Group group;
public:
    NurserySchool();
    void setData();
    void show();
    void show(T*);
};
template<typename T>
NurserySchool<T>::NurserySchool(){
    this->ID=0;
}
template<typename T>
void NurserySchool<T>::setData(){
    T id;
    std::cout<<"Give group ID: ";
    std::cin>>id;
    this->ID=id;
    (this->group).setGroup();
}
template<typename T>
void NurserySchool<T>::show(){
    std::cout<<"Group ID: "<<this->ID<<std::endl;
    (this->group).show();
}
template<typename T>
void NurserySchool<T>::show(T *t){
    *t=this->ID;
}
#endif
