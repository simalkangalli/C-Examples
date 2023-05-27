#pragma once
#include <iostream>
#include"Member.h"
using namespace std;

class Student : public Member {

private:
    int studentID;

public:
    Student(const string  name, int age, int studentID) : Member(name, age), studentID(studentID) {} //constructer

    void getInfo()   override {
        cout << "Student ID: " << studentID << ", ";
        Member::getInfo();// çaðýrma
    }
    void takeMission() override {
        cout << "listen to the lesson." << endl;


    }
    virtual void dataInput() override {
        cout << " access denied to the data. " << endl;
    }
};

