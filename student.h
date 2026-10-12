#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
#include <string>
using namespace std;

class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int courseDays[3];
    DegreeProgram degree;

public:
    void set_studentID(string specificStudentID);
    void set_firstName(string specificFirstName);
    void set_lastName(string specificLastName);
    void set_emailAddress(string specificEmailAddress);
    void set_age(int specificAge);
    void set_courseDays(int x, int y, int z);
    void set_degreeProgram(DegreeProgram program);

    string get_studentID();
    string get_firstName();
    string get_lastName();
    string get_emailAddress();
    int get_age();
    int *get_courseDays();
    DegreeProgram get_degreeProgram();

    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int x, int y, int z, DegreeProgram degree);

    void print();
};

#endif