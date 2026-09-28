#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;

class student{
    string name;
    int studentNumber;
    int age;
    int Chinese;
    int Math;
    int English;

    public:
    student(string na,int stu,int ag,int chi,int ma,int eng );
    string getname()const;
    int getstudentnumber()const;
    int amount()const;
    int getage()const;
    int getchinese()const;
    int getmath()const;
    int getenglish()const;
};

#endif