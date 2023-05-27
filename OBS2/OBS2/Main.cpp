#include <iostream>
#include"Member.h"
#include"Student.h"
#include"Teacher.h"
using namespace std;

int main() {
    //Member member("simal kangalli", 30);
    Member* student1 = new Student("abc",98,545667);
    Student student2("kagan alaybeypglu", 20, 12345);
    Teacher teacher("hakan alaybeyoglu", 45, "Physics");

    student1->getInfo();
    student2.getInfo();
    teacher.getInfo();

     student2.takeMission(); 
     student2.dataInput();
     teacher.dataInput();
     teacher.takeMission();


    

    
}
