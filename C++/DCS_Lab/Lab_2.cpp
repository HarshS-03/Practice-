#include <iostream>
#include <string>
using namespace std;

int getM(int a[], int subnum);

class Student {
    int rn;
    string name;
    float marks;  
public:
    void setRN(int rn) { this->rn = rn; }
    int getRN() { return rn; }

    void setName(string name) { this->name = name; }
    string getName() { return name; }

    void setMarks(float marks) { this->marks = marks; }
    float getMarks() { return marks; }

    float getPercentage(int subnum) {
        return (marks * 100) / (subnum * 100); 
    }

    void getInfo(int subnum) {
        cout << "Roll Number: " << rn << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << marks << endl;
        cout << "Percentage: " << getPercentage(subnum) << "%" << endl;
    }
};

// function to calculate total marks of subjects
int getM(int a[], int subnum) {
    int sum = 0;
    for (int i = 0; i < subnum; i++) {
        sum += a[i];
    }
    return sum;
}

bool uniqueRN(Student S[], int count, int rn) {
    for (int i = 0; i < count; i++) {
        if (S[i].getRN() == rn) return false;
    }
    return true;
}


float highestMarks(Student S[], int num) {
    float marks = 0;
    float hMarks = S[0].getMarks();
    for (int i = 1; i < num; i++) {
        if (S[i].getMarks() > hMarks) {
            hMarks = S[i].getMarks();
            marks = i;
        }
    }
    return marks;
}

int main() {
    int num, subnum;
    cout << "Enter The Number Of Students: ";
    cin >> num;
    cout << "Enter The Number Of Subjects: ";
    cin >> subnum;

    Student S[num];

    for (int i = 0; i < num; i++) {
        int rn;
        string name;
        int subject[subnum];
        cout << "Enter The Roll Number Of Student " << i + 1 << ": ";
        cin >> rn;
        while (!uniqueRN(S, i, rn)) {
            cout << "Roll Number already exists! Enter a unique one: ";
            cin >> rn;
        }
        cout << "Enter The Name Of Student " << i + 1 << ": ";
        cin >> name;

        for (int j = 0; j < subnum; j++) {
            cout << "Enter Marks Of Subject " << j + 1 << ": ";
            cin >> subject[j];
        }

        int marks = getM(subject, subnum);

        S[i].setRN(rn);
        S[i].setName(name);
        S[i].setMarks(marks);
    }

    cout << "----- Student Data -----" << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student " << i + 1 << " Info:" << endl;
        S[i].getInfo(subnum);
        cout << "-------------------------" << endl;
    }

    int topper= highestMarks(S, num);
    cout << "Highest Marks Details:"<<endl;
    cout << "Roll Number: " << S[topper].getRN() << endl;
    cout << "Name: " << S[topper].getName() << endl;
    cout << "Highest Marks: " << S[topper].getMarks() << endl;

    return 0;
}
