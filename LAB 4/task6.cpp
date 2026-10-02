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
            cout<<"Less than two nodes exits"<<endl;
            return;
        }

        Node* temp=head;
        temp=temp->next;
        cout<<temp->data;
        
    }

    void InsertAtBeginning(int addData){

        if(head==NULL){
            Node* n= new Node(addData);
            head=n;
            tail=n;
        }
        else{
        Node* n= new Node(addData);

        n->next=head;
        head=n;
        }
    }

    void DeleteNode(int delData){

    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    if(head->data==delData){
        Node* temp=head;
        head=head->next;
        delete temp;

        if(head==NULL){
            tail=NULL;
        }

        return;
    }

    Node* pre=head;
    Node* temp=head->next;

    while(temp!=NULL){

        if(temp->data==delData){

            pre->next=temp->next;

            if(temp==tail){
                tail=pre;
            }

            delete temp;
            return;
        }

        pre=temp;
        temp=temp->next;
    }

    cout<<"Value not found"<<endl;
    }

};


int main(){

    list l;

    int choice;
    int value;

    do{

        cout<<endl;
        cout<<"========== LINKED LIST MENU =========="<<endl;
        cout<<"1. Insert at beginning"<<endl;
        cout<<"2. Insert at end"<<endl;
        cout<<"3. Search by value"<<endl;
        cout<<"4. Delete by value"<<endl;
        cout<<"5. Display all nodes"<<endl;
        cout<<"6. Count nodes"<<endl;
        cout<<"7. Display second node"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                cout<<"Enter value: ";
                cin>>value;
                l.InsertAtBeginning(value);
                cout<<"Node inserted at beginning."<<endl;
                break;

            case 2:
                cout<<"Enter value: ";
                cin>>value;
                l.AddNode(value);
                cout<<"Node inserted at end."<<endl;
                break;

            case 3:
                cout<<"Enter value to search: ";
                cin>>value;
                l.SearchNode(value);
                break;

            case 4:
                cout<<"Enter value to delete: ";
                cin>>value;
                l.DeleteNode(value);
                break;

            case 5:
                l.PrintList();
                cout<<endl;
                break;

            case 6:
                cout<<"Number of nodes: "<<l.CountNodes()<<endl;
                break;

            case 7:
                l.PrintSecondNode();
                break;

            case 8:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }

    }while(choice!=8);

    l.ClearList();

    return 0;
}