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

void displayStudent(const Student*s){

    cout<<"Student Name: "<<s->name<<endl;
    cout<<"Roll Number: "<<s->roll_number<<endl;
    cout<<"Marks: "<<s->marks<<endl;

}

void updateMarks(Student* s,float newMarks){

    s->marks=newMarks;

}

int main() {

    Student *s=new Student();

    cout<<"Enter Student Name: ";
    getline(cin,s->name);
    cout<<"Enter Roll Number: ";
    cin>>s->roll_number;
    cout<<"Enter Marks: ";
    cin>>s->marks;

    cout<<"Student record before update of marks: "<<endl;
    displayStudent(s);

    float new_marks;
    cout<<"Enter new Marks: ";
    cin>>new_marks;

    updateMarks(s,new_marks);

    cout<<"Studnet record after update of marks: "<<endl;
    displayStudent(s);

    delete s;
    s=nullptr;

    
    
    return 0;
}