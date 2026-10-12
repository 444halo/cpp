#include <iostream>
#include "roster.h"
#include <sstream>
using namespace std;

Roster::Roster()
{
  const string studentData[] =
      {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
       "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
       "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
       "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
       "A5,Halo,Boykin,hboyki7@wgu.edu,22,21,28,35,SOFTWARE"};

  for (size_t i = 0; i < size(studentData); i++)
  {
    stringstream ss(studentData[i]);

    string studentID, firstName, lastName,
        emailAddress, ageString, xString,
        yString, zString, degreeString;

    getline(ss, studentID, ',');
    getline(ss, firstName, ',');
    getline(ss, lastName, ',');
    getline(ss, emailAddress, ',');

    getline(ss, ageString, ',');
    int age = stoi(ageString);
    getline(ss, xString, ',');
    int x = stoi(xString);
    getline(ss, yString, ',');
    int y = stoi(yString);
    getline(ss, zString, ',');
    int z = stoi(zString);
    getline(ss, degreeString);

    DegreeProgram degree;

    if (degreeString == "SECURITY")
    {
      degree = DegreeProgram::SECURITY;
    }
    else if (degreeString == "NETWORK")
    {
      degree = DegreeProgram::NETWORK;
    }
    else if (degreeString == "SOFTWARE")
    {
      degree = DegreeProgram::SOFTWARE;
    }
  }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
  Student *newStudent = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

  classRosterArray.push_back(newStudent);
}

void Roster::remove(string studentID)
{
  for (size_t i = 0; i < classRosterArray.size(); i++)
  {
    if (classRosterArray[i]->get_studentID() == studentID)
    {
      delete classRosterArray[i];
      classRosterArray.erase(classRosterArray.begin() + i);
      return;
    }
  }
  cout << "Student with ID "
       << studentID
       << " was not found."
       << endl;
}

void Roster::printAll()
{
  for (Student *student : classRosterArray)
  {
    student->print();
  }
}

void Roster::printAverageDaysInCourse(string studentID)
{
  for (Student *student : classRosterArray)
  {
    if (student->get_studentID() == studentID)
    {
      int *days = student->get_courseDays();

      double average = (days[0] + days[1] + days[2]) / 3.0;

      cout << studentID << ": " << average << " average course days." << endl;
      return;
    }
  }
}

void Roster::printInvalidEmails()
{
  for (Student *student : classRosterArray)
  {
    string email = student->get_emailAddress();

    if (email.find('@') == string::npos ||
        email.find('.') == string::npos ||
        email.find(' ') != string::npos)
    {
      cout << "Invalid email: " << email << endl;
    }
  }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
  for (Student *student : classRosterArray)
  {
    if (student->get_degreeProgram() == degreeProgram)
    {
      student->print();
    }
  }
}

Roster::~Roster()
{
  for (Student *student : classRosterArray)
  {
    delete student;
  }
}