#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

class list{

    public:
    Node* head;
    Node* tail;

    list(){
        
        head=NULL;
        tail=NULL;
    }

    void CreateThreeNodes(int val1,int val2, int val3){
        Node* n=new Node(val1);
        Node* n1= new Node(val2);
        Node* n2=new Node(val3);

        head=n;
        n->next=n1;
        n1->next=n2;
        n2->next=NULL;
        tail=n2;
  
    }

    void PrintList(){
        Node* temp=head;

        if(head==NULL){
            cout<<"List is empty"<<endl;
        }
        
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void ClearList(){

        while(head!=NULL){
            Node* temp=head;
            head=head->next;
            delete temp;
        }

        tail=NULL;
    }

      void AddNode(int addData){

        if(head==NULL){
            Node* n= new Node(addData);
            head=n;
            tail=n;
        }
        else{
            
        Node* n= new Node(addData);
        Node* temp= head;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        

        temp->next=n;
        n->next=NULL;
        tail=n;
    }
    }

    int CountNodes(){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
             count++;
             temp=temp->next;
        }
        return count;
    }

    void SearchNode(int searchData){
        Node* temp=head;
        int data_index=1;
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
        }
        while(temp!=NULL){
            if(temp->data==searchData){
                cout<<"Value found at position "<<data_index<<endl;
                return;
            }
            else{
                temp=temp->next;
                data_index++;
            }

        }

        cout<<"Value not found"<<endl;
        return;
    }

    void PrintSecondNode(){

        int count=CountNodes();
        if(count<2){
            cout<<"Less than two notes exits"<<endl;
            return;
        }

        Node* temp=head;
        temp=temp->next;
        cout<<temp->data;
        
    }
};


int main() {
    
    list l;
    
    cout<<"Searching when list in not formed"<<endl;
    l.SearchNode(20);

    cout<<"Printing second Node when there is only 1 node in list"<<endl;
    l.AddNode(10);
    l.PrintSecondNode();

    cout<<"Add different notes and then searching and printing second note"<<endl;
    l.AddNode(20);
    l.AddNode(30);
    l.AddNode(20);
    l.SearchNode(20);
    l.SearchNode(99);
    l.PrintSecondNode();

    l.ClearList();
    
    return 0;
}