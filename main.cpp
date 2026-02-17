#include <iostream>
#include <vector>

using namespace std;
class Student {
public:
    string name;
    string indexNumber;
    string attendanceStatus;


    Student(string n, string i) {
        name = n;
        indexNumber = i;
       attendanceStatus = "Not Marked";

    }
};
// ================= ATTENDANCE SESSION CLASS =================
class AttendanceSession {
public:
    string courseCode;
    string date;
    string startTime;
    int duration;

    AttendanceSession(string c, string d, string s, int dur) {
        courseCode = c;
        date = d;
        startTime = s;
        duration = dur;
    }
};


    void markAttendance() {
        attendanceCount++;
    }
};


vector<Student> students;
void attendanceSummary() {
    int present = 0;
    int absent = 0;
    int late = 0;

    for (int i = 0; i < students.size(); i++) {

        if (students[i].attendanceStatus == "Present") {
            present++;
        }
        else if (students[i].attendanceStatus == "Absent") {
            absent++;
        }
        else if (students[i].attendanceStatus == "Late") {
            late++;
        }
    }

    cout << "\n===== Attendance Summary =====\n";
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;
    cout << "Late: " << late << endl;
}

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
        cout << "No students registered.\n";
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name
             << ", Index: " << students[i].indexNumber
             << ", Status: " << students[i].attendanceStatus
             << endl;
    }
}

void createSession() {
    string courseCode, date, startTime;
    int duration;
}
    void markAttendance() {
    string index;
    cout << "Enter student index number: ";
    cin >> index;

    for (int i = 0; i < students.size(); i++) {

        if (students[i].indexNumber == index) {

            int option;
            cout << "1. Present\n";
            cout << "2. Absent\n";
            cout << "3. Late\n";
            cout << "Select attendance status: ";
            cin >> option;

            if (option == 1) {
                students[i].attendanceStatus = "Present";
            }
            else if (option == 2) {
                students[i].attendanceStatus = "Absent";
            }
            else if (option == 3) {
                students[i].attendanceStatus = "Late";
            }
            else {
                cout << "Invalid option\n";
                return;
            }

            cout << "Attendance marked successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

    cout << "Enter course code: ";
    cin >> courseCode;

    cout << "Enter date (YYYY-MM-DD): ";
    cin >> date;

    cout << "Enter start time: ";
    cin >> startTime;

    cout << "Enter duration (minutes): ";
    cin >> duration;

    // Create file name
    string fileName = "session_" + courseCode + "_" + date + ".txt";

    ofstream file(fileName);

    file << "Course Code: " << courseCode << endl;
    file << "Date: " << date << endl;
    file << "Start Time: " << startTime << endl;
    file << "Duration: " << duration << " minutes" << endl;

    file.close();

    cout << "Session created and saved successfully!\n";
}

    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name
             << ", Index: " << students[i].indexNumber
            


void showMenu();

void showMenu() {
 {
   
   cout << "\n===== Digital Attendance System =====\n";
cout << "1. Add Student\n";
cout << "2. View Students\n";
cout << "3. Search Student\n";
cout << "4. Create Attendance Session\n";
cout << "5. Mark Attendance\n";
cout << "6. Attendance Summary\n";
cout << "7. Save Students\n";
cout << "8. Exit\n";
cout << "Enter choice: ";

  switch(choice) {
    case 1:
        addStudent();
        break;

    case 2:
        viewStudents();
        break;

    case 3:
        searchStudent();
        break;

    case 4:
        createSession();
        break;

    case 5:
        markAttendance();
        break;

    case 6:
        attendanceSummary();
        break;

    case 7:
        saveStudents();
        break;

    case 8:
        saveStudents();
        cout << "Exiting...\n";
        break;

    default:
        cout << "Invalid choice\n";
}

  



int main() {

    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        
 } while(choice != 8);




    return 0;
}
