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

};
int main() {

    list l;
    cout<<"When list is not formed then printing list:"<<endl;
    l.PrintList();

    int x,y,z;

    cout<<"Enter value of List: ";

    cin>>x;
    cin>>y;
    cin>>z;
    l.CreateThreeNodes(x,y,z);
    l.PrintList();
    cout<<endl;

    cout<<"After deletion of List"<<endl;
    l.ClearList();
    l.PrintList();
    
    return 0;
}