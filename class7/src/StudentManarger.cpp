#include<iomanip>
#include<iostream>
using namespace std;
#include"Student.h"
#include"StudentManarger.h"


void man::input(){
    string na;
    cout<<"请输入学生的基本信息\n姓名：";cin >> na;
    int stu;
    cout<<"\n学号：";cin>>stu;
    int ag;
    cout<<"\n年龄：";cin>>ag;
    int chi,ma,eng;
    cout<<"\n语文成绩：";cin>>chi;cout<<"\n数学成绩：";cin>>ma;cout<<"\n英语成绩：";cin>>eng;
    student s(na,stu,ag,chi,ma,eng);
    students.push_back(s);
}

void man::display()const{
    cout<<"所有学生信息如下"<<endl;
    if(students.size()==0){
        cout<<"暂无";
    }
    else{
        cout<<"姓名"<<setw(8)<<"学号"<<setw(8)<<"年龄"<<setw(8)<<"语文成绩"<<setw(8)<<"数学成绩"<<setw(8)<<"英语成绩\n";
        for(const student& s:students){
            cout<<s.getname()<<setw(8)<<s.getstudentnumber()<<setw(8)<<s.getage()<<setw(8)<<s.getchinese()<<setw(8)<<s.getmath()<<setw(8)<<s.getenglish()<<"\n";
        }
    }
}

void man::seek()const{
    cout<<"请输入想要查找的学号：";
    int id;
    cin>>id;

    int i=0;

    for(const student& s:students){
        if(s.getstudentnumber()==id){
            cout<<"姓名:"<<s.getname()<<"\n学号:"<<s.getstudentnumber()<<"\n年龄:"<<s.getage()<<"\n语文成绩:"<<s.getchinese()<<"\n数学成绩:"<<s.getmath()<<"\n英语成绩:"<<s.getenglish()<<endl;
        }
        else{i++;}
    }

    if(i==students.size()){
        cout<<"很抱歉，未找到对象"<<endl;
    }

}

void man::cul()const{
    int t;
    for(const student& s:students){
        t+=s.amount();
    }
    cout<<t/3<<endl;
}