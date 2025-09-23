#include<iostream>
using namespace std;

class AIML {
public:
    string subject;
    AIML() {}
    AIML(string subject) {
        this->subject = subject;
    }   
    void getDetails(int rn, string name, float marks) {
		cout<<"------------------------------------------"<<endl;
        cout << "Roll Number: " << rn << endl;
        cout << "Name: " << name << endl;     
        cout << "Marks: " << marks << endl;       
		cout<<"------------------------------------------"<<endl;
    }  
};

class Student {
public:
    int rn;
    string name;
    float marks;
    AIML a;

    Student() {}
    Student(int rn, string name, float marks, string subject) : a(subject) {
        this->rn = rn;
        this->name = name;
        this->marks = marks;  
    }

    void getData() {
        a.getDetails(rn, name, marks);
    }   
};

int main() {
    int number;
    cout << "Enter The Number Of Students: ";
    cin >> number;
    Student* students = new Student[number];
	int* a = new int[number];
    for(int i = 0; i < number; i++) {
        int rn;
        string name;
        float marks;
        cout << "Enter Roll No for Student " << i + 1 << ": ";
        cin >> rn;
        cout << "Enter Name for Student " << i + 1 << ": ";
		cin>>name;
        cout << "Enter Marks for Student " << i + 1 << ": ";
        cin >> marks;
        students[i] = Student(rn, name, marks, "C++");
		a[i]=marks;
    }

    cout << "\nStudents Details Are Below:\n";
    for(int i = 0; i < number; i++) {
        cout << "Student " << i + 1 << ":\n";
        students[i].getData();
    	cout << endl;
    }
	float max = a[0];  
	for(int i = 1; i < number; i++){
    	if(a[i] > max){
        	max = a[i];  
    }
	}
	cout << "Highest Marks Is: " << max << endl;
    delete[] students;
	delete[] a; 
    return 0;
}
