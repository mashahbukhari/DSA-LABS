// Name: Muhammad Ali Shah
// Cms id: 550925

// This program creates two Student objects, displays their marks, changes the marks of the first student, and displays the updated marks.

#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;
    int marks;

    void display(){
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main() {

    cout<<"Name: Muhammad Ali Shah"<<endl;
    cout<<"CMS ID: 5505925"<<endl;

    Student s1;
    Student s2;
    s1.rollNumber=1;
    s1.marks=75;

    s2.rollNumber=2;
    s2.marks=90;

    cout<<"Before changing marks:"<<endl;
    s1.display();
    s2.display();

    s1.marks=80;

    cout<<"After changing marks: "<<endl;
    s1.display();
    s2.display();

    return 0;
}
