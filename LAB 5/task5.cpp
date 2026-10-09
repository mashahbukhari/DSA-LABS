//Name: Muhammad Ali Shah
//BSCS-15-D
//Cms ID: 550925
#include <iostream>

using namespace std;

class ArrayStack{
    int items[5];
    int top=-1;

    public:
    void push(int value){
        if(IsFull()){
            cout << "Stack overflow! Cannot push " << value << endl;
            return;
        }
        top++;
        items[top]=value;
    }

    void Pop(){
        if(IsEmpty()){
            cout << "Stack underflow! Cannot pop." << endl;
            return;
        }
        cout<<"Pop value:"<<items[top]<<endl;
        top--;
    }

    void Peek(){
        if(IsEmpty()){
            cout << "Stack underflow! Cannot peek." << endl;
            return;
        }
        cout<<"Peek Value: "<<items[top]<<endl;
    }

    bool IsEmpty(){

    if(top==-1){
        return true;

    }
    else{
        return false;
    }
}

    bool IsFull(){

        if(top==4){
            return true;
        }
        else{
            return false;
        }
        }
    

    void Display(){

        if(IsEmpty()){
            cout<<"Stack is empty"<<endl;
            return;
        }

        for(int i=top;i>=0;i--){
            cout<<items[i]<<" ";
        }
        cout<<endl;
    }

};

int main() {
    ArrayStack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.Display();

    cout<<"Rejecting 6 push: "<<endl;
    s.push(60);

    
    s.Pop();
    s.Peek();

    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    
    cout<<"Rejecting pop when empty: "<<endl;
    s.Pop();


    return 0;
}