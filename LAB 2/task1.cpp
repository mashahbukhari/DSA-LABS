#include <iostream>

using namespace std;

int main() {
    int sales[5];
    int *p=sales;
    int total=0;

    cout<<"Enter sales: ";

    for(int i=0;i<5;i++){
        cin>>*(p+i);

    }

    cout<<"Sales (before updating 3rd element): ";

    for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
        total=total+*(p+i);
    }

    cout<<"\nTotal Sales (before updating 3rd element): "<<total<<endl;

    *(p+2)=2+*(p+2);

    total=0;

    cout<<"Sales (after updating 3rd element): ";

    for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
        total=total+*(p+i);
    }

    cout<<"\nTotal Sales (after updating 3rd element): "<<total;

    return 0;
}