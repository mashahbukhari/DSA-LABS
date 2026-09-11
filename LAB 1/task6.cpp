// Name: Muhammad Ali Shah
// Cms id: 550925
#include <iostream>

using namespace std;

int main() {

    cout<<"Name: Muhammad Ali Shah"<<endl;
    cout<<"CMS ID: 5505925"<<endl;
    
    int nums[10];

    cout<<"Enter the elements in array: "<<endl;
    for(int i=0;i<10;i++){

        cin>>nums[i];
    }

    int count=0;


    for(int i=0;i<10;i++){

        bool duplicate_found=false;

        for(int j=0;j<count;j++){
        if(nums[i]==nums[j]){
            duplicate_found=true;
                break;
            }
        } 
        
        if(!duplicate_found){
                nums[count]=nums[i];
                count++;
            }

        }

    cout<<"Unique Values: "<<endl;

    for(int i=0;i<count;i++){
        cout<<nums[i]<<" ";
    }
    
    cout<<"\nCount: "<<count<<endl;

    return 0;
}