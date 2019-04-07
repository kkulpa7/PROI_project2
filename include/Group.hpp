#ifndef GROUP_HPP
#define GROUP_HPP
#include "Child.hpp"
#include "Teacher.hpp"
#include <vector>
class Group{
private:
    Teacher teacher;
    int amount;
    std::vector<Child> children;
    void setTeacher(Teacher);
    void setAmount(int);
    void setChildren();
public:
    void setData();
    void setGroup();
    void show();
};
#endif
