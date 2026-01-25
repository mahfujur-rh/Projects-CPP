#include <bits/stdc++.h>
using namespace std;

class subject {
public:
    string subname;
    float credit;
    float gradepoint;

    subject(string name, float cr, float gp) {
        subname = name;
        credit = cr;
        gradepoint = gp;
    }
};

class student {
public:
    string name;
    vector<subject> subjects;

    student(string stdname) {
        name = stdname;
    }

    void addsubject(string subname, float credit, float gradepoint) {
        subject newsubject(subname, credit, gradepoint);
        subjects.push_back(newsubject);
    }

    float calculatecgpa() {
        float totalcredit = 0;
        float weightedgradepoint = 0;

        for (const subject &s : subjects) {
            totalcredit += s.credit;
            weightedgradepoint += s.credit * s.gradepoint;
        }

        return (totalcredit > 0) ? (weightedgradepoint / totalcredit) : 0;
    }

    void dispalycgpa() {
        cout << "Student Name: " << name << endl;
        cout << "CGPA: " << calculatecgpa() << endl;
    }
};

int main() {
    string stdname;
    int numsub;

    cout << "Enter student name: ";
    cin >> stdname;

    cout << "Enter the number of subjects: ";
    cin >> numsub;

    student s(stdname);

    for (int i = 0; i < numsub; i++) {
        string subname;
        float credit;
        float gradepoint;

        cout << "Enter subject name: ";
        cin >> subname;
        cout << "Enter credit: ";
        cin >> credit;
        cout << "Enter grade point: ";
        cin >> gradepoint;
        //add the sub and sub record--
        s.addsubject(subname, credit, gradepoint);
    }
    
    s.dispalycgpa();
    return 0;
}

