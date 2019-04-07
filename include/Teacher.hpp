#ifndef TEACHER_HPP
#define TEACHER_HPP
#include <string>
class Teacher{
private:
    std::string *name;
    std::string *surname;
    std::string *academicDegree;
    void setName(std::string);
    void setSurname(std::string);
    void setAcademicDegree(std::string);
public:
	//~Teacher();
    void setData();
    void show();
};
#endif
