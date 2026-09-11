// Name: Muhammad Ali Shah
// Cms id: 550925
// In this program we are changing the 3rd element of an array 

#include <iostream>
using namespace std;

int main(){
    cout<<"Name: Muhammad Ali Shah"<<endl;
    cout<<"CMS ID: 5505925"<<endl;

    int numbers[5]={2,4,6,8,10}; 

    numbers[2]=7; 
    cout<<"Displaying an array: ";

    for(int i=0;i<5;i++){
        cout<<numbers[i]<<" "; 
    }

    return 0;

}
