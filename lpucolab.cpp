#include <iostream>
using namespace std;

class Student {
private:
    static int count;
    int marks[5];

public:
    static int getCount() {
        return count;
    }

    void setMarks(int subject1, int subject2, int subject3, int subject4, int subject5) {
        marks[0] = subject1;
        marks[1] = subject2;
        marks[2] = subject3;
        marks[3] = subject4;
        marks[4] = subject5;
        count++;
    }

    void getMarks(int studentNumber) {
        cout << "Marks of student " << studentNumber << ": ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int Student::count = 0;

int main() {
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++) {
        int s1, s2, s3, s4, s5;
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
        students[i].setMarks(s1, s2, s3, s4, s5);
    }

    cout << "Total number of students: " << Student::getCount() << endl;
    for (int i = 0; i < n; i++) {
        students[i].getMarks(i + 1);
    }

    return 0;
}