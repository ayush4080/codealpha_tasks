#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<float> grades(n);
    vector<int> credits(n);
    float totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grades[i];
        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credits[i];
        totalGradePoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nCourse-wise Grades:\n";
    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1 << ": Grade = " << grades[i] << ", Credits = " << credits[i] << "\n";
    }

    cout << "Total Credits: " << totalCredits << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
