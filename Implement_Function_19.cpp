/*
Created In 2/10/2026
Implement_Function_19



This function calculates and prints the highest, lowest, average, and overall grade of a list of student scores.
*/



#include <iostream>
#include <string>
#include <vector>
using namespace std;


void grades_management(const vector<int>& grades) {
    // 85 or above = Excellent | 70 - 85 = Very Good | 60 - 70 = Good | 50 - 60 = Fail
    double all_grades = 0;
    int maximum_grade = 0;
    int minimum_grade = 100;
    double average_grade = 0;
    string overall_grade = "Not Defined";
    
    for(int i : grades) {
        if (i > maximum_grade) {
            maximum_grade = i;
        }
        if (i < minimum_grade) {
            minimum_grade = i;
        }
        all_grades += i;
    }
    average_grade = all_grades / grades.size();

    if (average_grade >= 85) {overall_grade = "Excellent";}
    else if (average_grade >= 70 && average_grade < 85) {overall_grade = "Very Good";}
    else if (average_grade >= 60 && average_grade < 70) {overall_grade = "Good";}
    else {overall_grade = "Fail";}

    cout << "Maximum Grade = " << maximum_grade << endl;
    cout << "Minimum Grade = " << minimum_grade << endl;
    cout << "Average Grade = " << average_grade << endl;
    cout << "Percentage Grade = " << average_grade << "%" << endl;
    cout << "Overall Grade = " << overall_grade << endl;
}


int main() {
    vector<int> test = {85, 80, 90, 80, 90};
    grades_management(test);
}