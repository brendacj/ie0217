#include "students.hpp"
#include <iostream>

using namespace std;

Student::Student (double m) {
    marks = m;
}


void calculateAvarage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) /2;
    std::cout << "Avarage Marks = " << average << std::endl;
}