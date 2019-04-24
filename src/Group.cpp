#include "Group.hpp"
#include <iostream>
using namespace std;
void Group::setTeacher(){
    (this->teacher).setData();
}
void Group::setAmount(int amount){
    this->amount=amount;
}
void Group::setChildren(){
    Child child;
    for (int a=0; a<this->amount; a++){
        cout<<a+1<<" child: "<<endl;
        child.setData();
        this->children.push_back(child);
    }
}
void Group::setData(){
    setTeacher();
    cout<<endl;
    int amount;
    cout<<"Give amount of children: ";
    cin>>amount;
    cout<<endl;
    setAmount(amount);
    setChildren();
}
void Group::setGroup(){
    setData();
    if (this->amount==0)
        return;
    int option;
    int childNumber;
    while (1){
        cout<<endl<<"Do you want to add absences?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
        cin>>option;
        if (option==2)
            return;
        cout<<endl<<"To what child do you what to add absences?"<<endl<<"Give option from 1 to "<<this->amount<<endl;
        cin>>childNumber;
        cout<<endl<<"How many absences do you want to add?"<<endl;
        cin>>option;
        for (int a=0; a<option; a++)
            ++children[childNumber-1];
    }
}
void Group::show(){
    cout<<"Teacher: ";
    (this->teacher).show();
    if (this->amount!=0){
        cout<<endl<<"Children: "<<endl;
        int a=0;
        for (vector<Child>::iterator it=this->children.begin(); it!=this->children.end(); ++it){
            cout<<(++a)<<". ";
            (*it).show();
            cout<<endl;
        }
    }
}
