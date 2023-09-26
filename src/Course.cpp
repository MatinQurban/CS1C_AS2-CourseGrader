// cpp file for course class

#include "Course.h"

Course::Course() {
    instructor = "";
    CourseTitle = "";
    CourseDescription = "";
}

Course::Course(string instructor, string CourseTitle, string CourseDescription) {
    this->instructor = instructor;
    this->CourseTitle = CourseTitle;
    this->CourseDescription = CourseDescription;
}

void Course::addStudent(Student student) {
    students.push_back(student);
}

void Course::addAssignment(Assignment assignment) {
    assignments.push_back(assignment);
}

void Course::printRoster() {
    cout << "Course Title: " << CourseTitle << endl;
    cout << "Course Instructor: " << instructor << endl;
    cout << "Course Description: " << CourseDescription << endl;
    cout << "Student Roster: \n";
    for (int i = 0; i < students.size(); i++) {
        cout << "Student " << i+1 << ": " << students[i].getName() << endl;
    }
    cout << endl;
}

void Course::printAssignments() {
    cout << "Course Title: " << CourseTitle << endl;
    cout << "Course Instructor: " << instructor << endl;
    cout << "Course Description: " << CourseDescription << endl;
    cout << "Assignments: \n";
    for (int i = 0; i < assignments.size(); i++) {
        cout << "Assignment " << i+1 << ": " << assignments[i].getName() << endl;
    }
    cout << endl;
}