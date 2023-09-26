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

void Student::addAssignmentGrade(int assignmentGrade) {
    assignmentGrades.push_back(assignmentGrade);
}

void Student::printDetails() {
    cout << "Student Name: " << name << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Total Points Earned: " << totalPointsEarned << endl;
    cout << "Total Points Possible: " << totalPointsPossible << endl;
    cout << "Letter Grade: " << getLetterGrade() << endl;
}

void Student::printGrades() {
    cout << "Student Name: " << name << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Grades: \n";
    for (int i = 0; i < assignmentGrades.size(); i++) {
        cout << "Assignment " << i+1 << ": " << assignmentGrades[i] << "\n";
    }
    cout << endl;
}

char Student::getLetterGrade() {
    double percentage = (double)totalPointsEarned / totalPointsPossible;
    if (percentage >= 0.9) {
        return 'A';
    } else if (percentage >= 0.8) {
        return 'B';
    } else if (percentage >= 0.7) {
        return 'C';
    } else if (percentage >= 0.6) {
        return 'D';
    } else {
        return 'F';
    }
}

string Student::getName() {
    return name;
}
