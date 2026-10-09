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

    void InsertBefore(int position, int value) {

    if(position < 1) {
        cout << "Invalid position" << endl;
        return;
    }

    if(head == NULL) {
        if(position == 1) {
            node* n = new node(value);
            head = n;
            tail = n;
        }
        else {
            cout << "Invalid position" << endl;
        }
        return;
    }

    node* temp = head;

    if(position == 1) {
        node* n = new node(value);
        n->next = head;
        n->prev = NULL;
        head->prev = n;
        head = n;
        return;
    }

    for(int i = 1; i < position - 1; i++) {
    temp = temp->next;

    if(temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }
    }

    if(temp->next == NULL) {
    cout << "Invalid position" << endl;
    return;
    }
    node* temp1;

    if(temp->next != NULL) {
        temp1 = temp->next;
        node* n = new node(value);

        n->next = temp1;
        n->prev = temp;
        temp->next = n;
        temp1->prev = n;
    }

    
}
void DeleteNode(int value){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            break;
        }
        temp=temp->next;
        
    }

    if(temp==NULL){
        cout<<"Value not found"<<endl;
        return;
    }
    node* before;
    node* after;

    if(temp->prev!=NULL){
    before=temp->prev;
}
    else{
        head=temp->next;
        if(head!=NULL){
        head->prev=NULL;
        }
        else{
            tail=NULL;
        }
        delete temp;
        temp=NULL;
        return;
    }

    if(temp->next!=NULL){
    after=temp->next;
    }
    else{
        tail=temp->prev;
        tail->next=NULL;
        delete temp;
        temp=NULL;
        return;
    }

    before->next=after;
    after->prev=before;

    delete temp;
    temp=NULL;
}
};


int main() {
    linkedlist l;


    cout << "TEST 1: Insert Before Head" << endl;
    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(30);
    l.InsertBefore(1, 5);
    cout << "Forward: ";
    l.PrintForward();
    cout << "\nReverse: ";
    l.PrintReverse();
    l.ClearList();

    
    cout << "\nTEST 2: Delete Head" << endl;
    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(30);
    l.DeleteNode(10);
    cout << "Forward: ";
    l.PrintForward();
    cout << "\nReverse: ";
    l.PrintReverse();
    l.ClearList();

    
    cout << "\nTEST 3: Delete Tail" << endl;
    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(30);
    l.DeleteNode(30);
    cout << "Forward: ";
    l.PrintForward();
    cout << "\nReverse: ";
    l.PrintReverse();
    l.ClearList();

    cout << "\nTEST 4: Delete Only Node" << endl;
    l.AddNode(10);
    l.DeleteNode(10);
    cout << "Forward: ";
    l.PrintForward();
    cout << "Reverse: ";
    l.PrintReverse();

    cout << "TEST 5: Delete Missing Value" << endl;
    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(30);
    l.DeleteNode(50);
    cout << "Forward: ";
    l.PrintForward();
    cout << "\nReverse: ";
    l.PrintReverse();
    l.ClearList();

    cout << "\nTEST 6: Invalid Insertion" << endl;
    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(30);
    l.InsertBefore(4, 40);
    cout << "Forward: ";
    l.PrintForward();
    cout << "\nReverse: ";
    l.PrintReverse();
    l.ClearList();

    cout << "\nTEST 7: Delete From Empty List" << endl;
    l.DeleteNode(10);

    return 0;
}
