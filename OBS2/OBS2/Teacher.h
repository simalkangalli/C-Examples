#pragma once
#include<iostream>
#include"Member.h"
class Teacher : public Member {
private:
    string department;

public:
    Teacher(const string name, int age, const string department) : Member(name, age), department(department) {}

    void getInfo()  override {
        cout << "Department: " << department << ", ";
        Member::getInfo();
    }
    virtual void dataInput() {

        cout << " access granted to the data." << endl;
    }
};

