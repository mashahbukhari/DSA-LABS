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

void display(Student s){
    cout<<"Student Name: "<<s.name<<endl;
    cout<<"Roll Number: "<<s.roll_number<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}

int main() {

    Student s;

    cout<<"Enter Student Name: ";
    getline(cin,s.name);
    cout<<"Enter Roll Number: ";
    cin>>s.roll_number;
    cout<<"Enter Marks: ";
    cin>>s.marks;

    display(s);
    
    return 0;
}