#pragma once
#include<iostream>
using namespace std;

class Member {
protected:
    string name;
    int age;

public:
    Member(const string  name, int age) : name(name), age(age) {}

    virtual void getInfo()  {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    virtual void takeMission()  {
        
    }
    virtual void dataInput()  {
      
    }
};

