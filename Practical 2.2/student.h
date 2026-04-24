#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
using namespace std;

class student
{
private:
    string name;
    int id;
    float m1, m2, m3, avg;

public:
    void new_student();
    int student_result(int);
};

#endif
