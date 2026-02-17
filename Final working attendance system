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
void markStudentAttendance() {
    string index;
    cout << "Enter index number to mark attendance: ";
    cin >> index;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].indexNumber == index) {
            students[i].markAttendance();
            cout << "Attendance marked successfully!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

void addStudent() {
    string name, index;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter index number: ";
    cin >> index;

    students.push_back(Student(name, index));

    cout << "Student added successfully!" << endl;
}

void viewStudents() {
    if (students.empty()) {
        cout << "No students available." << endl;
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name
             << ", Index: " << students[i].indexNumber
            


void showMenu();

void showMenu() {
    cout << "\n===== Digital Attendance System =====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Mark Attendance" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}




int main() {

    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: markStudentAttendance(); break;
            case 4: cout << "Exiting..."; break;

            default:
    cout << "Invalid choice!" << endl;
    break;
        }

    } while (choice != 4);

    return 0;
}
