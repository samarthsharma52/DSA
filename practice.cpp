// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int d)
  {
      this->data = d;
      this->next = NULL;
  }
  ~Node()
  {
    int value = this->data;
    if(this->next != NULL)
    {
        delete next;
        this -> next = NULL;
    }
    cout << "This Memory Is Free and value is: " << value << endl;
  }
};
void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPosition(Node* &tail, Node* &head,int position, int d){
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1)
    {
        temp = temp -> next;
        count ++;
    }
    if(temp->next == NULL)
    {
        insertAtTail(tail,d);
        return ;
    }
    Node* newNodeToInsert = new Node(d);
    newNodeToInsert -> next = temp->next;
    temp -> next = newNodeToInsert;
}
void deleteNode(Node* &head, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = NULL;
        int count = 1;
        while(count < position)
        {
            prev = curr;
            curr = curr -> next;
            count ++;
        }
        prev -> next = curr;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(10);
   // cout << node1->data << endl;
    //cout << node1-> next << endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail, 11);
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtPosition(tail, head,3,100);
    print(head);
    insertAtPosition(tail, head,1,100);
    print(head);
    cout << head->data << endl;
    cout << tail -> data << endl;
    deleteNode(head, 1);
    print(head);

    return 0;
}