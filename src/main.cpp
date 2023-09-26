// Main file to test Course grader and all classes

#include "Student.h"
#include "Course.h"


int main()
{
    // Create a course
    Course course("Homi Bodhanwala", "Intro to C++", "Learn C++");

    // Create three students
    Student student1("Kiwon Lee", 12345);
    Student student2("Matin Qurbanzadeh", 67890);
    Student student3("Luke Juedes", 13579);

    // Add students to course
    course.addStudent(&student1);
    course.addStudent(&student2);
    course.addStudent(&student3);

    // Create three assignments
    Assignment assignment1("Assignment 1", "Recipe book", 100);
    Assignment assignment2("Assignment 2", "Perfect shuffle", 150);
    Assignment assignment3("Assignment 3", "Course Grader", 150);

    // Add assignments to course
    course.addAssignment(&assignment1);
    course.addAssignment(&assignment2);
    course.addAssignment(&assignment3);

    // Creating submissions
    Submission stud1Asmt1Submission(&assignment1, 52);
    Submission stud1Asmt2Submission(&assignment2, 130);
    Submission stud1Asmt3Submission(&assignment3, 10);

    Submission stud2Asmt1Submission(&assignment1, 100);
    Submission stud2Asmt2Submission(&assignment2, 150);
    Submission stud2Asmt3Submission(&assignment3, 150);

    Submission stud3Asmt1Submission(&assignment1, 75);
    Submission stud3Asmt2Submission(&assignment2, 110);
    Submission stud3Asmt3Submission(&assignment3, 150);

    // Add submissions to students
    student1.addSubmission(stud1Asmt1Submission);
    student1.addSubmission(stud1Asmt2Submission);
    student1.addSubmission(stud1Asmt3Submission);

    student2.addSubmission(stud2Asmt1Submission);
    student2.addSubmission(stud2Asmt2Submission);
    student2.addSubmission(stud2Asmt3Submission);

    student3.addSubmission(stud3Asmt1Submission);
    student3.addSubmission(stud3Asmt2Submission);
    student3.addSubmission(stud3Asmt3Submission);

    // Print course roster
    course.printRoster();
    course.printAssignments();

    return 0;
}