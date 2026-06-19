#include <iostream>
using namespace std;

int main()
{
    int n;
    float grade, credit;
    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter Grade Point: ";
        cin >> grade;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        totalGradePoints = totalGradePoints + (grade * credit);
        totalCredits = totalCredits + credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits;
    cout << "\nTotal Grade Points = " << totalGradePoints;
    cout << "\nFinal CGPA = " << cgpa;

    return 0;
}