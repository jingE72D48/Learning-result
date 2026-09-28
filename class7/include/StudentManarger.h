#ifndef STUDENTMANARGER_H
#define STUDENTMANARGER_H

#include<iostream>
#include<vector>
using namespace std;


class student;

class man{
    vector<student> students;

    public:
    void input();
    void display()const;
    void seek()const;
    void cul()const;
}; 

#endif