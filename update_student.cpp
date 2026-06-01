#include <iostream>
#include <string>

using namespace std;

struct Student {
    int rollNumber;
    string name;
    double grade;
};

int main() {
    int size = 3;
    Student students[3] = {
        {101, "Alice", 85.5},
        {102, "Bob", 90.0},
        {103, "Charlie", 78.2}
    };

    int searcRoll;
    bool found = false;

    cout << "Enter a roll number to update: ";
    cin >> searcRoll;

    for (int i = 0; i < size; i++) {
        if (students[i].rollNumber == searcRoll) {
            found = true;
            cout << "Student found! Enter new grade: ";
            cin >> students[i].grade;
            cout << "Record updated successfully." << endl;
            break;
        }
    }

    if (!found) {
        cout << "The student is not found." << endl;
    }

    return 0;
}
