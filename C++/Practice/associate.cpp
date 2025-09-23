#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    int pincode;
    string location;
    int house_no;   

    Address(int pincode1, string location1, int house_no1) {
        pincode = pincode1;
        location = location1;
        house_no = house_no1;
    }

    void display() {
        cout << "Pincode: " << pincode<< ", Location: " << location<< ", House No: " << house_no;
    }
};

class School {
public:
    string name;
    int age;
    string role;
    Address a;
    School(int age1, string name1, string role1, Address a1) : a(a1) {
        age = age1;
        name = name1;
        role = role1;
    }
};

class Teacher {
public:
    School s1;
    string subject;
    Address a1;

    Teacher(string subject1, School s1_1, Address a1_1) : s1(s1_1), a1(a1_1) {
        subject = subject1;
    }

    void displayInfo() {
        cout << "Name Is : " << s1.name << endl;
        cout << "Age Is : " << s1.age << endl;
        cout << "Role Is : " << s1.role << endl;
        cout << "Subject Is : " << subject << endl;
        cout << "Address Is : ";
        a1.display();
        cout << endl;
    }
};

class Student {
public:
    School s2;
    string stream;
    Address a1;

    Student(string stream1, School s2_1, Address a2) : s2(s2_1), a1(a2) {
        stream = stream1;
    }

    void displayInfo() {
        cout << "Name Is : " << s2.name << endl;
        cout << "Age Is : " << s2.age << endl;
        cout << "Role Is : " << s2.role << endl;
        cout << "Stream Is : " << stream << endl;
        cout << "Address Is : ";
        a1.display();
        cout << endl;
    }
};

class Office_Staff {
public:
    School s3;
    string work_role;
    Address a3;

    Office_Staff(string work_role1, School s3_1, Address a3_1) : s3(s3_1), a3(a3_1) {
        work_role = work_role1;
    }

    void displayInfo() {
        cout << "Name Is : " << s3.name << endl;
        cout << "Age Is : " << s3.age << endl;
        cout << "Role Is : " << s3.role << endl;
        cout << "Work Role Is : " << work_role << endl;
        cout << "Address Is : ";
        a3.display();
        cout << endl;
    }
};

int main() {
    Address A1(380013, "Ahmedabad", 1);
    Address A2(395008, "Surat", 2);
    Address A3(384001, "Mehsana", 3);

    School S1(30, "Harsh", "Professor", A1);
    School S2(28, "Sujal", "Office_Staff", A2);
    School S3(20, "Om", "Student", A3);

    Teacher T1("Mathematics", S1, A1);
    Student St1("Science", S3, A3);
    Office_Staff OS1("Administrator", S2, A2);

    T1.displayInfo();
    cout << endl;
    St1.displayInfo();
    cout << endl;
    OS1.displayInfo();

    return 0;
}
