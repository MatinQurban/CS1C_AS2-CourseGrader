// Header file for Submission class

#ifndef SUBMISSION_H_
#define SUBMISSION_H_

#include "Assignment.h"

class Submission {
public:
    Submission();
    Submission(Assignment assignment, int pointsEarned);
    ~Submission();

    int getPointsEarned();

    void setAssignment(Assignment assignment);
    void setPointsEarned(int pointsEarned);

private:
    Assignment *assignmentPtr;
    int pointsEarned;
};

#endif // SUBMISSION_H_