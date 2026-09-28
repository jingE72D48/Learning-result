#include"Student.h"

student::student(string na,int stu,int ag,int chi,int ma,int eng )
:name(na),studentNumber(stu),age(ag),Chinese(chi),Math(ma),English(eng){}

string student::getname()const{
    return name;
}

int student::getstudentnumber()const{
    return studentNumber;
}

int student::getage()const{
    return age; 
}

int student::amount()const{
    return Chinese+English+Math;
}

int student::getchinese()const{
    return Chinese;
}

int student::getmath()const{
    return Math;
}

int student::getenglish()const{
    return English;
}
