#include <iostream>
#include <iomanip>  
using namespace std;

int main(){
    int numCourses;
    float credits, gradePoints, totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    if (numCourses <= 0) {
        cout << "Number of courses must be greater than zero." << endl;
        return 1; 
    }

    for(int i = 0; i < numCourses; i++){
        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits;

        if (credits < 0) {
            cout << "Credits cannot be negative. Please re-enter." << endl;
            i--; 
            continue;
        }

        cout << "Enter grade points for course " << i + 1 << ": ";
        cin >> gradePoints;

        if (gradePoints < 0 || gradePoints > 4) {
            cout << "Grade points must be between 0 and 4. Please re-enter." << endl;
            i--; 
            continue;
        }

        totalCredits += credits;
        totalGradePoints += gradePoints * credits;

        cout << "Course " << i + 1 << " Contribution: "
             << fixed << setprecision(2) << gradePoints << " GPA with " << credits << " credits." << endl;
    }

    if (totalCredits > 0) {
        float cgpa = totalGradePoints / totalCredits;

        cout << "\nFinal Report:\n";
        cout << "Total Credits: " << totalCredits << endl;
        cout << "Total Grade Points: " << totalGradePoints << endl;
        cout << "CGPA: " << fixed << setprecision(2) << cgpa << endl;
    } else {
        cout << "No valid credits were entered. Cannot calculate CGPA." << endl;
    }

    return 0;
}
