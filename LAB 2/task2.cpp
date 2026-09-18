#include <iostream>

using namespace std;

int main() {

    int n;
    double total=0;
    double avg;
    int count=0;
    
    cout<<"Enter number of students: "<<endl;

    cin>>n;

    while(n<=0){
        cout<<"Error. Enter valid number of students"<<endl;
        cout<<"Enter number of students: "<<endl;
        cin>>n;
    }

    int* marks= new int[n];

    cout<<"Enter marks: "<<endl;

    for(int i=0;i<n;i++){
        cin>>*(marks+i);
    }

    cout<<"Marks of student: ";
    for(int i=0;i<n;i++){
        cout<<*(marks+i)<<" ";
        total+=*(marks+i);
        if(*(marks+i)>=50){
            count++;
        }

    }

    avg= total/n;
    cout<<"\nTotal: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
    cout<<"Pass count: "<<count<<endl;

    delete[] marks;
    marks=nullptr;


    return 0;
}