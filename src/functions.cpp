#include "functions.hpp"
#include "NurserySchool.hpp"
#include <iostream>
using namespace std;
void menu(){
    vector< NurserySchool<int> > groups;
    int option, op=0;
    int num=0;
    while(1){
        NurserySchool<int> group;
        cout<<"What do you want to do?"<<endl<<
        "1. Add new group."<<endl<<
        "2. See existing group."<<endl<<
        "3. Finish program."<<endl;
        cin>>option;
        switch(option){
        case 1:
            group.setData();
            groups.push_back(group);
            break;
        case 2:
			if (groups.size()==0){
				cout<<"There are no groups to see."<<endl;
				break;
			}
            cout<<"Which group do you want to see?"<<endl;
            for (unsigned int a=0; a<groups.size(); a++){
                groups[a].show(&num);
                cout<<a+1<<". "<<num<<endl;
            }
            cin>>op;
            groups[op-1].show();
            break;
        case 3:
            return;
        }
    }
}
