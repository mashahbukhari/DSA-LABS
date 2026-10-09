//Name: Muhammad Ali Shah
//BSCS-15-D
//Cms ID: 550925
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedStack {
    node* top = nullptr;

public:

    void Push(int value) {
        node* n = new node(value);

        n->next = top;
        top = n;
    }

    void Pop() {
        if (IsEmpty()) {
            cout << "Stack underflow! Stack is empty." << endl;
            return;
        }

        node* temp = top;
        cout << "Pop value: " << top->data << endl;

        top = top->next;
        delete temp;
    }

    void Peek() {
        if (IsEmpty()) {
            cout << "Stack is empty. Cannot peek." << endl;
            return;
        }

        cout << "Top value: " << top->data << endl;
    }

    bool IsEmpty() {
        if(top == nullptr){
            return true;
        }
        else{
            return false;
        }
    }

    void Display() {
        if (IsEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        node* temp = top;

        cout << "Stack : ";

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void ClearStack() {
        while (top != nullptr) {
            node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    LinkedStack s;
    int choice, value;

    do {
        cout << "\n===== LINKED STACK MENU =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.Push(value);
                break;

            case 2:
                s.Pop();
                break;

            case 3:
                s.Peek();
                break;

            case 4:
                s.Display();
                break;

            case 5:
                s.ClearStack();
                cout << "Stack cleared. Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}

// . Explain LIFO and compare the fixed capacity of Task 5 with growth by dynamic allocation in Task 6
/*
LIFO means the last element inserted into a stack is the first one removed. 
For example, if we push 10, 20, 30, the first pop removes 30

In Task 5, the array stack has a fixed capacity of 5 elements, so it cannot accept more elements when full.
In Task 6, the linked stack uses dynamic memory allocation to create new nodes as needed, so it can
 grow as long as memory is available.
*/
