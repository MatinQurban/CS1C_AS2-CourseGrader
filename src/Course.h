// Header file for Course class
/*1. A course has an instructor, name and description (e.g. Homi Bodhanwala, CS 1C, Intro to Computer Science III).

2. Each course contains several students and assignments.

3. A course supports:

a) Printing the student roster (names and id numbers of the students)

b) Printing the assignment list (names and descriptions of assignments)

c) Displaying the final grades of each student (student id, student name, letter grade)*/


#ifndef COURSE_H_
#define COURSE_H_

#include <string>
#include "Student.h"
#include "Assignment.h"
using namespace std;


class Course {
public:
    Course();
    Course(string instructor, string CourseTitle, string CourseDescription);

    void addStudent(Student* student);
    void addAssignment(Assignment* assignment);

    void printRoster();
    void printAssignments();
    vector<Student*> students;

private:
    string instructor;
    string CourseTitle;
    string CourseDescription;
    vector<Assignment*> assignments;

};


#endif // COURSE_H_