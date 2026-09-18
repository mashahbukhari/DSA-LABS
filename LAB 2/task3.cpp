#include <iostream>

using namespace std;

int main() {

    int total_branch=0;
    int total_day=0;
    int sales[2][3];

    int (*rowPtr)[3]=sales;

    cout<<"Enter elements:"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>*(*(rowPtr+i)+j);
            total_branch+=*(*(rowPtr+i)+j);
        }
    }

    cout<<"Displaying elements:"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<*(*(rowPtr+i)+j)<<" ";
        }
        cout<<"\n";
    }

    cout<<"Displaying Totals of Branches: "<<endl;

    for(int i=0;i<2;i++){
        total_branch=0;
        for(int j=0;j<3;j++){
            total_branch+=*(*(rowPtr+i)+j);
        }
        cout<<"Branch Total "<<i+1<<" : "<<total_branch<<endl;
    }

    cout<<"Displaying Totals Per Day: "<<endl;

    for(int j=0;j<3;j++){
        total_day=0;
        for(int i=0;i<2;i++){
            total_day+=*(*(rowPtr+i)+j);
        }
        cout<<"Day Total "<<j+1<<" : "<<total_day<<endl;
    }


    return 0;
}