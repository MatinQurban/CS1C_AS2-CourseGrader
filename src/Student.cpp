// Implementation of Student class

#include "student.h"

Student::Student() {
    name = "";
    studentID = 0;
    totalPointsEarned = 0;
    totalPointsPossible = 0;
}

Student::Student(string name, int studentID) {
    this->name = name;
    this->studentID = studentID;
    totalPointsEarned = 0;
    totalPointsPossible = 0;
}
