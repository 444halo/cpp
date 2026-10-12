#include "student.h"
#include <iostream>
using namespace std;

void Student::set_studentID(string specificStudentID)
{
    studentID = specificStudentID;
}

void Student::set_firstName(string specificFirstName)
{
    firstName = specificFirstName;
}

void Student::set_lastName(string specificLastName)
{
    lastName = specificLastName;
}

void Student::set_emailAddress(string specificEmailAddress)
{
    emailAddress = specificEmailAddress;
}

void Student::set_age(int specificAge)
{
    age = specificAge;
}

void Student::set_courseDays(int x, int y, int z)
{
    courseDays[0] = x;
    courseDays[1] = y;
    courseDays[2] = z;
}

void Student::set_degreeProgram(DegreeProgram program)
{
    degree = program;
}

string Student::get_studentID()
{
    return studentID;
}

string Student::get_firstName()
{
    return firstName;
}

string Student::get_lastName()
{
    return lastName;
}

string Student::get_emailAddress()
{
    return emailAddress;
}

int Student::get_age()
{
    return age;
}

int *Student::get_courseDays()
{
    return courseDays;
}

DegreeProgram Student::get_degreeProgram()
{
    return degree;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int x, int y, int z, DegreeProgram degree)
{
    set_studentID(studentID);
    set_firstName(firstName);
    set_lastName(lastName);
    set_emailAddress(emailAddress);
    set_age(age);
    set_courseDays(x, y, z);
    set_degreeProgram(degree);
}

void Student::print()
{
    cout << studentID << '\t'
         << "First Name: " << firstName << '\t'
         << "Last Name: " << lastName << '\t'
         << "Email: " << emailAddress << '\t'
         << "Age: " << age << '\t'
         << "daysInCourse: {" << courseDays[0] << ", " << courseDays[1] << ", " << courseDays[2] << "}"
         << " Degree Program: ";

    switch (degree)
    {
    case SECURITY:
        cout << "SECURITY";
        break;
    case NETWORK:
        cout << "NETWORK";
        break;
    case SOFTWARE:
        cout << "SOFTWARE";
        break;
    }

    cout << endl;
}