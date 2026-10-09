//Name: Muhammad Ali Shah
//BSCS-15-D
//Cms ID: 550925
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }

};

class linkedlist{
    node* head=NULL;
    node* tail=NULL;

    public:

    void AddNode(int value){
        if(tail==NULL){
            node* n= new node(value);
            n->prev=NULL;
            n->next=NULL;
            head=n;
            tail=n;
    
        }
        else{
            node* n=new node(value);
            n->prev=tail;
            tail->next=n;
            n->next=NULL;
            tail=n;
        }
    }

    void PrintForward(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
         }
        node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void PrintReverse(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
         }
        node* temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
    }
    
    void ClearList(){

         while(head!=NULL){
            node* temp=head;
            head=head->next;
            delete temp;
         }   
         tail=NULL;
    }
};

int main() {

    int n;
    linkedlist l;

    cout<<"Enter the number you wanted to add the nodes: "<<endl;
    cin>>n;

    if(n<0){
        cout<<"You enter wrong number of nodes"<<endl;
        return -1;
    }

    for(int i=0;i<n;i++){
        cout<<"Enter the value for node "<<i+1<<" : "<<endl;
        int value;
        cin>>value;
        l.AddNode(value);
    }
    
    cout<<"Printing list forward"<<endl;
    l.PrintForward();

    cout<<"\nPrinting list backward"<<endl;
    l.PrintReverse();

    l.ClearList();
    
    return 0;
}