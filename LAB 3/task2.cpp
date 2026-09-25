// Name: Muhammad Ali Shah
// CMS ID: 550925
// Section: BSCS-15-D

#include <iostream>

using namespace std;

struct Student{
    string name;
    int roll_number;
    double marks;

};

int main() {

    Student s;

    Student* p=&s;

    cout<<"Enter Student Name: ";
    getline(cin,s.name);
    cout<<"Enter Roll Number: ";
    cin>>s.roll_number;
    cout<<"Enter Marks: ";
    cin>>s.marks;

    cout<<"Record Before Update: "<<endl;
    cout<<"Student Name: "<<p->name<<endl;
    cout<<"Roll Number: "<<p->roll_number<<endl;
    cout<<"Marks: "<<p->marks<<endl;

    double new_marks;
    cout<<"Enter New Marks: ";
    cin>>new_marks;

    p->marks=new_marks;

    cout<<"Record After Update of Marks: "<<endl;
    cout<<"Student Name: "<<p->name<<endl;
    cout<<"Roll Number: "<<p->roll_number<<endl;
    cout<<"Marks: "<<p->marks<<endl;

    
    return 0;
}