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

    void DeleteNode(int value) {

        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        node* temp = head;
        node* prev = tail;

        do {
            if (temp->data == value) {

                if (head == tail) {
                    delete temp;
                    head = NULL;
                    tail = NULL;
                    return;
                }

                if (temp == head) {
                    head = head->next;
                    tail->next = head;
                    delete temp;
                    return;
                }

                prev->next = temp->next;

                if (temp == tail) {
                    tail = prev;
                }

                tail->next = head;
                delete temp;
                return;
            }

            prev = temp;
            temp = temp->next;

        } while (temp != head);

        cout << "Value not found" << endl;
    }
};

int main() {
    circularlinkedlist l;

    cout << "TEST 1: Empty List" << endl;
    l.DeleteNode(10);
    cout << "Count: " << l.CountNodes() << endl;


    cout << "\nTEST 2: Delete Head, Tail, and Last Node" << endl;

    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(30);

    cout << "Initial list: ";
    l.PrintList();

    l.DeleteNode(10);
    cout << "After deleting 10: ";
    l.PrintList();
    cout << "Count: " << l.CountNodes() << endl;

    l.DeleteNode(30);
    cout << "After deleting 30: ";
    l.PrintList();
    cout << "Count: " << l.CountNodes() << endl;

    l.DeleteNode(20);
    cout << "After deleting 20: ";
    l.PrintList();
    cout << "Count: " << l.CountNodes() << endl;

    
    cout << "\nTEST 3: Missing Value" << endl;

    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(30);

    l.DeleteNode(50);
    cout << "List: ";
    l.PrintList();
    cout << "Count: " << l.CountNodes() << endl;

    l.ClearList();
 
    cout << "\nTEST 4: Duplicate Values" << endl;

    l.AddNode(10);
    l.AddNode(20);
    l.AddNode(20);
    l.AddNode(30);
    cout << "Initial list: ";
    l.PrintList();

    l.DeleteNode(20);

    cout << "After deleting 20: ";
    l.PrintList();
    cout << "Count: " << l.CountNodes() << endl;

    l.ClearList();

    return 0;
}

    