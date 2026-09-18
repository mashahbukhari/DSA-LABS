#include <iostream>

using namespace std;

int main() {
    int r;
    int c;
    
    cout<<"Enter number of students: ";
    cin>>r;

    while(r<=0){
        cout<<"You Entered wrong number of Students. Please enter correct"<<endl;
        cout<<"Enter number of students: ";
        cin>>r;

    }


    cout<<"Enter number of subjects: ";
    cin>>c;

    while(c<=0){
        cout<<"You entered wrong number subjects. Please enter correct"<<endl;
        cout<<"Enter number of subjects: ";
        cin>>c;

    }

    int** marks=new int*[r];

    for(int i=0;i<r;i++){
        marks[i]=new int[c];
    }

    cout<<"Reading values:"<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>*(*(marks+i)+j);
        }
    }

    cout<<"Displaying:"<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<*(*(marks+i)+j)<<" ";
        }
        cout<<endl;
    }
     
    int total;
    int highest=0;
    int student_number;

    for(int i=0;i<r;i++){
        total=0;
        for(int j=0;j<c;j++){
            total+=*(*(marks+i)+j);
            
        }
        cout<<"Student "<<i+1<<" total: "<<total<<endl;

        if(total>highest){
                highest=total;
                student_number=i+1;
            }
        
    }

    cout<<"Top Student "<<student_number<<" with total: "<<highest;

    for(int i=0;i<r;i++){
        delete[] marks[i];
    }
    delete[] marks;
    marks=nullptr;


    return 0;
}