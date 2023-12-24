#include <iostream>
#include <vector>
using namespace std;

int main() {
    int exams, yourGradeTotal = 0;
    vector<int> yourExams;

    cout << "Ilang exam lods? (out of 100): ";
    cin >> exams;

    cout << "Ilan ang mga scores mo sa " << exams << " mo:" << endl;
    for (int i = 0; i < exams; i++) {
        int score;
        cout << "Enter score for exam " << i + 1 << ": ";
        cin >> score;
        yourGradeTotal += score;
        yourExams.push_back(score);
    }

    int totalItems = exams;
    int yourGradeAve = (yourGradeTotal * 100) / (totalItems * 100);
    int whatGrade, neededPoints;

    cout << "Ilan gusto mong makuhang grades baby? ";
    cin >> whatGrade;

    neededPoints = (whatGrade * totalItems) - yourGradeTotal;
    if (neededPoints > 100) {
        cout << "Bawi next sem hahaha ulol babaan mo pangarap mo." << endl;
        return 0;
    } else {
        if (neededPoints > 0 && whatGrade > 0)
        cout << "Need mo ng " << neededPoints << " points para makapasa." << endl;
        else if (whatGrade <= 0)
        cout << "Nyark." << endl;
        else
        cout << "Pasado ka na baby" << endl;
    }
    

    return 0;
}
