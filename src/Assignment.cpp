// Implementation of Assignment class

#include "Assignment.h"

Assignment::Assignment() {
    name = "";
    description = "";
    totalPointsPossible = 0;
}

Assignment::Assignment(string name, string description, int totalPointsPossible) {
    this->name = name;
    this->description = description;
    this->totalPointsPossible = totalPointsPossible;
}

string Assignment::getName() {
    return name;
}

string Assignment::getDescription() {
    return description;
}

int Assignment::getTotalPointsPossible() {
    return totalPointsPossible;
}

void Assignment::setName(string name) {
    this->name = name;
}

void Assignment::setDescription(string description) {
    this->description = description;
}

void Assignment::setTotalPointsPossible(int totalPointsPossible) {
    this->totalPointsPossible = totalPointsPossible;
}

void Assignment::print() {
    cout << "Assignment Name: " << name << endl;
    cout << "Assignment Description: " << description << endl;
    cout << "Total Points Possible: " << totalPointsPossible << endl;
}