// Name: Muhammad Ali Shah
// Cms id: 550925

// In this program we calculating the sum of the elements in the array

#include <iostream>
using namespace std;

int main() {

    cout<<"Name: Muhammad Ali Shah"<<endl;
    cout<<"CMS ID: 5505925"<<endl;
    
    int numbers[5];
    int total=0;

    for(int i=0;i<5;i++){
        cout<<"Enter the number in array at index "<<i+1<<": "<<endl;
        cin>>numbers[i];
    }

    for(int i=0;i<5;i++){
        total=total+numbers[i];
    }
    cout<<"Total: "<<total<<endl;

    return 0;
}
