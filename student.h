#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include "degree.h"

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int courseDays[3];
    DegreeProgram degree;

public:
    void set_studentID(string specificStudentID)
    {
        studentID = specificStudentID;
    }

    void set_firstName(string specificFirstName)
    {
        firstName = specificFirstName;
    }

    void set_lastName(string specificLastName)
    {
        lastName = specificLastName;
    }

    void set_emailAddress(string specificEmailAddress)
    {
        emailAddress = specificEmailAddress;
    }

    void set_age(int specificAge)
    {
        age = specificAge;
    }

    void set_courseDays(int x, int y, int z)
    {
        courseDays[0]= x;
        courseDays[1]= y;
        courseDays[2]= z;
    }

    void set_degreeProgram(DegreeProgram program) {
        degree = program;
    }

    string get_studentID()
    {
        return studentID;
    }

    string get_firstName()
    {
        return firstName;
    }

    string get_lastName()
    {
        return lastName;
    }

    string get_emailAddress()
    {
        return emailAddress;
    }

    int get_age()
    {
        return age;
    }

    void get_courseDays()
    {
        cout << "{" << courseDays[0] << ", " << courseDays[1] << ", " << courseDays[2] << "}";
    }

    DegreeProgram get_degreeProgram() {
        return degree;
    }

    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int x, int y, int z, DegreeProgram degree) {
        set_studentID(studentID);
        set_firstName(firstName);
        set_lastName(lastName);
        set_emailAddress(emailAddress);
        set_age(age);
        set_courseDays(x,y,z);
        set_degreeProgram(degree);
    }

    string course() {
        switch(get_degreeProgram()){
        case SECURITY: return "SECURITY";
        case NETWORK: return "NETWORK";
        case SOFTWARE: return "SOFTWARE";
        default: return "UNKNOWN";
        }
    }
};

#endif