#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string id;
    string name;
    string program;
    int year;

    // Constructor
    Student(string id, string name, string program, int year) {
        this->id = id;
        this->name = name;
        this->program = program;
        this->year = year;
    }

    void display() {
        cout << "ID: " << id 
             << " | Name: " << name 
             << " | Program: " << program 
             << " | Year: " << year << endl;
    }
};

vector<Student> students;

void registerStudent() {
    string id, name, program;
    int year;

    cout << "\n--- Register New Student ---\n";
    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore(); // clear newline

    cout << "Enter Full Name: ";
    getline(cin, name);

    cout << "Enter Program: ";
    getline(cin, program);

    cout << "Enter Year: ";
    cin >> year;

    students.push_back(Student(id, name, program, year));
    cout << "Student registered successfully!\n";
}

void viewStudents() {
    cout << "\n--- Registered Students ---\n";
    if (students.empty()) {
        cout << "No students registered yet.\n";
    } else {
        for (auto &s : students) s.display();
    }
}

int main() {
    int choice;
    do {
        cout << "\n==============================\n";
        cout << "   STUDENT ATTENDANCE SYSTEM   \n";
        cout << "==============================\n";
        cout << "1. Register Student\n";
        cout << "2. View All Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice (1-3): ";
        cin >> choice;

        switch(choice) {
            case 1: registerStudent(); break;
            case 2: viewStudents(); break;
            case 3: 
                cout << "\nThank you for using our service. Goodbye!\n"; 
                break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
