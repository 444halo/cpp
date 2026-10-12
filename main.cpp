#include <iostream>
using namespace std;

#include "student.h"
#include "roster.h"

int main()
{
  cout << "Scripting and Programming - Applications - C867" << endl
       << "Programming language: C++" << endl
       << "Student ID: 013590629" << endl
       << "Name: Halo Boykin" << endl;

  Roster classRoster;

  classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
  classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
  classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
  classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
  classRoster.add("A5", "Halo", "Boykin", "hboyki7@wgu.edu", 22, 21, 28, 35, SOFTWARE);

  classRoster.printAll();
  cout << endl;
  classRoster.printInvalidEmails();
  cout << endl;
  classRoster.printAverageDaysInCourse("A1");
  classRoster.printAverageDaysInCourse("A2");
  classRoster.printAverageDaysInCourse("A3");
  classRoster.printAverageDaysInCourse("A4");
  classRoster.printAverageDaysInCourse("A5");
  cout << endl;
  classRoster.printByDegreeProgram(SOFTWARE);
  cout << endl;
  classRoster.remove("A3");
  classRoster.printAll();
  cout << endl;
  classRoster.remove("A3");

  classRoster.~Roster();

  return 0;
};