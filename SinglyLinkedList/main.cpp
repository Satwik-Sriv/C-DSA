#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data){
        this->data = new_data;
        this->next = nullptr;
    }

};

void traverseList(Node* head){
    while(head!=nullptr){

        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deleteHead(Node* head){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }

    Node* temp = head;
    head=head->next;
    temp->next=NULL;
    delete(temp);

    return head;
}

Node* insertHead(Node* head, int val){
    if(head==nullptr){
        return new Node(val);
    }

    Node* temp = new Node(val);
    temp->next = head;
    return temp;
}

int main(){
    
    Node* head = new Node(10);
    head-> next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseList(head);

    head = deleteHead(head);

    traverseList(head);

    head = insertHead(head, 10);

    traverseList(head);

    return 0;
}