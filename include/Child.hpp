#ifndef CHILD_HPP
#define CHILD_HPP
#include <string>
class Child{
private:
    std::string name;
    std::string surname;
    std::string PESEL;
    int absence;
    void setName(std::string);
    void setSurname(std::string);
    void setPESEL(std::string);
public:
    Child();
    void operator++();
    void setData();
    void show();
};
#endif
