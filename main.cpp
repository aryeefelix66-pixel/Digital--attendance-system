#include <iostream>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    string indexNumber;
    int attendanceCount;

    Student(string n, string i) {
        name = n;
        indexNumber = i;
        attendanceCount = 0;
    }

    void markAttendance() {
        attendanceCount++;
    }
};


vector<Student> students;

void addStudent();
void viewStudents();
void showMenu();

int main() {

    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice
