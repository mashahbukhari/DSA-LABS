// Name: Muhammad Ali Shah
// Cms id: 550925

// Finding the largest and smallest number and indices in the array

#include <iostream>
using namespace std;

int main() {

    cout<<"Name: Muhammad Ali Shah"<<endl;
    cout<<"CMS ID: 5505925"<<endl;

    int nums[8];

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<8;i++){

        cin>>nums[i];
    }

    int smallest=nums[0];
    int s_index=0;
    int l_index=0;
    int largest=nums[0];

    for(int i=0;i<8;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            s_index=i;
        }
        if(nums[i]>largest){
            largest=nums[i];
            l_index=i;
            
        }
    }

    cout<<"Largest Number: "<<largest<<" at index "     <<l_index<<endl;

    cout<<"Smallest Number: "<<smallest<<" at index "<<s_index<<endl;

    return 0;
}

