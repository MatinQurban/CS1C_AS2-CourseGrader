//Header file for Assignment class
// 4. Assignments have a name, description, and total points possible.


#ifndef ASSIGNMENT_H_
#define ASSIGNMENT_H_

#include <string>
#include <iostream>
using namespace std;

class Assignment {
public:
    Assignment();
    Assignment(string name, string description, int totalPointsPossible);

    string getName();
    string getDescription();
    int getTotalPointsPossible();

    void setName(string name);
    void setDescription(string description);
    void setTotalPointsPossible(int totalPointsPossible);

    void print();

private:
    string name;
    string description;
    int totalPointsPossible;
};



#endif // ASSIGNMENT_H_