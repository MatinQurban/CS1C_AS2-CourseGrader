// Implementation file for Submission class

#include "Submission.h"

Submission::Submission() {
    assignmentPtr = NULL;
    pointsEarned = 0;
}

Submission::Submission(Assignment assignment, int pointsEarned) {
    this->assignmentPtr = &assignment;
    this->pointsEarned = pointsEarned;
}

Submission::~Submission() {
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