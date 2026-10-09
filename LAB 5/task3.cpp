
//Name: Muhammad Ali Shah
//BSCS-15-D
//Cms ID: 550925
#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }

};

class circularlinkedlist{
    node* head=NULL;
    node* tail=NULL;

    public:

    void AddNode(int value){
        if(head==NULL){
            node* n= new node(value);
            tail=n;
            head=n;
            tail->next=head;
            return;
        }
        node* n= new node(value);

        tail->next=n;
        tail=n;
        n->next=head;
    }

    void PrintList(){
        node* temp=head;
        
        if(head!=NULL){
            do{
                cout<<temp->data<<" ";
                temp=temp->next;
            }while(temp!=head);
        }
        else{
            cout<<"List is empty"<<endl;
        }
    }

    int CountNodes(){
        node* temp=head;
        int count=0;
        
        if(head!=NULL){
            do{
                count++;
                temp=temp->next;
            }while(temp!=head);
        }
        else{
            return count;
        }

        return count;
    }

    void ClearList() {
        if (head == NULL) {
            return;
        }

        tail->next = NULL;

        while (head != NULL) {
            node* temp = head;
            head = head->next;
            delete temp;
        }

        tail = NULL;
    }
};

int main() {

    circularlinkedlist l;

    l.PrintList();
    cout<<"Node: "<<l.CountNodes()<<endl;

    l.AddNode(10);
    l.PrintList();
    cout<<"\nNode: "<<l.CountNodes()<<endl;

    l.AddNode(20);
    l.AddNode(30);
    l.PrintList();
    cout<<"\nNode: "<<l.CountNodes()<<endl;

    l.ClearList();


    
    return 0;
}

//Explain why a normal nullptr-based traversal would not terminate on a non-empty circular list.
/*
A normal nullptr-based traversal does not terminate on a non-empty circular linked list
because the last node points back to the first node (head) instead of pointing to nullptr.
Therefore, the traversal keeps repeating the nodes. To avoid this, we use a do-while loop 
that stops when the pointer returns to head, ensuring that each node is visited exactly once.
*/