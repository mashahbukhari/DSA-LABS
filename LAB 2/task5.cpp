#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout<<"Enter the number of marks you wanted to enter: ";
    cin>>n;

    int* marks=new int[n];

    cout<<"Reading values:";

    for(int i=0;i<n;i++){
        cin>>*(marks+i);
    }

    cout<<"Displaying values:";
    for(int i=0;i<n;i++){
        cout<<*(marks+i)<<" ";
    }

    int* new_marks=new int[n+1];

    for(int i=0;i<n;i++){
        *(new_marks+i)=*(marks+i);
       }
    
    cout<<"\nEnter the new marks: ";
    cin>>*(new_marks+n);

    delete[] marks;
    marks=new_marks;
    n++;

    cout<<"Displaying values after additon of one marks: ";

    for(int i=0;i<n;i++){
        cout<<*(marks+i)<<" ";
    }

    delete[] marks;
    marks=nullptr;
    return 0;
}