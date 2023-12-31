// Implementation file for Submission class

#include "Submission.h"

Submission::Submission() {
    assignmentPtr = NULL;
    pointsEarned = 0;
}

Submission::Submission(Assignment *assignment, int pointsEarned) {
    assignmentPtr = assignment;
    setPointsEarned(pointsEarned);
}

Submission::~Submission() {
    assignmentPtr = nullptr;
    delete assignmentPtr;
}

int Submission::getPointsEarned() {
    return pointsEarned;
}

int Submission::getTotalPointsPossible() {
    return assignmentPtr->getTotalPointsPossible();
}

void Submission::setAssignment(Assignment assignment) {
    this->assignmentPtr = &assignment;
}

void Submission::setPointsEarned(int pointsEarned) {
    this->pointsEarned = pointsEarned;
}

void Submission::printSubmission() {
    cout << "Assignment Name: " << assignmentPtr->getName() << endl;
    cout << "          Score: " << pointsEarned << " / " << assignmentPtr->getTotalPointsPossible() << endl;
}