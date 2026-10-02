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
};

int main() {
    int n;

   cout<<"Enter the number you wanted make nodes in list: ";
   cin>> n;

   if(n<0){
    cout<<"You enter Wrong Nodes Number"<<endl;
    return -1;
   }

   list l;

   for(int i=0;i<n;i++){
    int val;
    cout<<"Enter value for Node "<<i+1<<" : ";
    cin>>val;
    l.AddNode(val);
   }

   cout<<"printing list:"<<endl;
   l.PrintList();


   cout<<"\nCount of Nodes:"<<endl;
   cout<<l.CountNodes();

   l.ClearList();
    
    return 0;
}