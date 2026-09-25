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
        cout<<"==============================="<<endl;
        cout<<"STUDENT DETAILS"<<endl;
        cout<<"==============================="<<endl;
        cout<<"Student Name: "<<s->name<<endl;
        cout<<"Roll Number: "<<s->roll_number<<endl;
        cout<<"Marks: "<<s->marks<<endl;
    }
    else{
        cout<<"No record available"<<endl;
    }
}

void updateMarks(Student* s,float newMarks){

    s->marks=newMarks;

}

int main() {
    Student *s=nullptr;

    while(true){
        cout<<"==============================="<<endl;
        cout<<"STUDENT RECORD APPLICATION"<<endl;
        cout<<"==============================="<<endl;
        cout<<"1.Create a record"<<endl;
        cout<<"2.Display record"<<endl;
        cout<<"3.Update marks"<<endl;
        cout<<"4.Delete record"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"==============================="<<endl;

        int choice;
        cout<<"Select the option: ";
        cin>>choice;

        if(choice==1){
            if(!s){
            s=new Student();

            cout<<"Enter Student Name: ";
            cin.ignore();
            getline(cin,s->name);
            cout<<"Enter Roll Number: ";
            cin>>s->roll_number;
            cout<<"Enter Marks: ";
            cin>>s->marks;
            cout<<"Created Record Successfully"<<endl;
            }
            else{
                cout<<"Already Record Stored"<<endl;
            }
        }
        else if(choice==2){

            displayIfExists(s);
        }
        else if(choice==3){
            if(s){
            float new_marks;
            cout<<"Enter new Marks: ";
            cin>>new_marks;

            updateMarks(s,new_marks);
            cout<<"Update Marks Successfully"<<endl;
            }
            else{
                cout<<"Record not Available"<<endl;
            }
        }
        else if(choice==4){
            if(s){
            delete s;
            s=nullptr;
            cout<<"Delete Student Record Successfully"<<endl;
            }
            else{
                cout<<"Record not Available"<<endl;
            }
        }
        else if(choice==5){
            if(s){
                delete s;
                s=nullptr;
            }

            cout<<"Exiting Program Good Bye"<<endl;
            break;
            
        }
        else{
            cout<<"Select Correct Option: "<<endl;
        }
    }
    return 0;
}