#include <iostream>
using namespace std;

#include "student.h"

int main() {
    Student john("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    Student suzan("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    Student jack("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    Student erin("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    Student halo("A5", "Halo", "Boykin", "hboyki7@wgu.edu", 22, 21, 28, 35, SOFTWARE);

    cout << john.get_studentID() << "   " << "First Name: " << john.get_firstName() << "    " << "Last Name: " << john.get_lastName() << "  " << "Email: " << john.get_emailAddress() << "  " << "Age: " << john.get_age() << "  " << "daysInCourse: ";
    john.get_courseDays();
    cout << " DegreeProgram: " << john.course() << endl;
    cout << suzan.get_studentID() << "   " << "First Name: " << suzan.get_firstName() << "    " << "Last Name: " << suzan.get_lastName() << "  " << "Email: " << suzan.get_emailAddress() << "  " << "Age: " << suzan.get_age() << "  " << "daysInCourse: ";
    suzan.get_courseDays();
    cout << " DegreeProgram: " << suzan.course() << endl;
    cout << jack.get_studentID() << "   " << "First Name: " << jack.get_firstName() << "    " << "Last Name: " << jack.get_lastName() << "  " << "Email: " << jack.get_emailAddress() << "  " << "Age: " << jack.get_age() << "  " << "daysInCourse: ";
    jack.get_courseDays();
    cout << " DegreeProgram: " << jack.course() << endl;
    cout << erin.get_studentID() << "   " << "First Name: " << erin.get_firstName() << "    " << "Last Name: " << erin.get_lastName() << "  " << "Email: " << erin.get_emailAddress() << "  " << "Age: " << erin.get_age() << "  " << "daysInCourse: ";
    erin.get_courseDays();
    cout << " DegreeProgram: " << erin.course() << endl;
    cout << halo.get_studentID() << "   " << "First Name: " << halo.get_firstName() << "    " << "Last Name: " << halo.get_lastName() << "  " << "Email: " << halo.get_emailAddress() << "  " << "Age: " << halo.get_age() << "  " << "daysInCourse: ";
    halo.get_courseDays();
    cout << " DegreeProgram: " << halo.course() << endl;

    return 0;
};