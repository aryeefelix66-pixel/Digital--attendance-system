#include <iostream>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    string indexNumber;

    Student(string n, string i) {
        name = n;
        indexNumber = i;
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
