// Header file for student class
/*  
Students have a name, student id, and grades for each assignment in the class.
A student supports:

a) Print the student details

b)Returning the student's letter grade. You can find the student's total earned points and divide
  it by the number of total points allowed and then convert that percentage to a letter grade.*/

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <vector>
#include "Assignment.h"
using namespace std;


class Student {
public:
    Student();
    Student(string name, int studentID);

    void addAssignment(Assignment assignment);
    void printDetails();
    void printGrades();
    char getLetterGrade();

private:
    string name;
    int studentID;
    vector<int> assignmentGrades;
    int totalPointsEarned;
    int totalPointsPossible;
};

#endif // STUDENT_H_