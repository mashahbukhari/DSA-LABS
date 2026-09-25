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

void displayIfExists(const Student* s){

    if(s){
        cout<<"Student Name: "<<s->name<<endl;
        cout<<"Roll Number: "<<s->roll_number<<endl;
        cout<<"Marks: "<<s->marks<<endl;
    }
    else{
        cout<<"No record available"<<endl;
    }
}

int main() {
    cout<<"Displaying when pointer is made and it is not pointing to anything: "<<endl;
    Student *st=nullptr;

    displayIfExists(st);

    st=new Student();

    cout<<"Enter Student Name: ";
    getline(cin,st->name);
    cout<<"Enter Roll Number: ";
    cin>>st->roll_number;
    cout<<"Enter Marks: ";
    cin>>st->marks;

    cout<<"Displaying when entered record: "<<endl;
    displayIfExists(st);

    cout<<"Displaying when delete student record: "<<endl;
    delete st;
    st=nullptr;
    displayIfExists(st);


    
    return 0;
}