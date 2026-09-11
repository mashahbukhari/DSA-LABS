// Name: Muhammad Ali Shah
// Cms id: 550925

#include <iostream>
#include <algorithm>

using namespace std;
void reverse( int arr[],int i,int j, int count,int size){

    if(count>=size/2){
        return;
    }
    swap(arr[i],arr[j]);

    reverse(arr,i+1,j-1,count+1,size);
}

int main() {

    cout<<"Name: Muhammad Ali Shah"<<endl;
    cout<<"CMS ID: 5505925"<<endl;

    int arr[6];

    cout<<"Enter the elements in array: "<<endl;

    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=size-1;
    int count=0;

    cout<<"Original Array: "<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    reverse(arr,i,j,count,size);

    cout<<"\nReverse Array: "<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}