#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
    public:
        double marks;

        Student (double m);
};

void calculateAvarage(Student s1, Student s2);

#endif