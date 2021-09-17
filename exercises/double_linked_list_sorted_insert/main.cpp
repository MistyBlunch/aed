#include <iostream>
#include <string>

using namespace std;

struct Node {
  int data;
  Node* next;
  Node* prev;
  Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

struct DoubleList {
  Node* head;
  Node* tail;
  DoubleList() : head(nullptr), tail(nullptr) {}
};

void SortedInsert(DoubleList* &list, int data) {
  Node* nodo = new Node(data);
  if(list->head == nullptr && list->tail == nullptr) { //lista vacia
    list->head = nodo;
    list->tail = nodo;
    return;
  }

  Node* i = list->head;
  while(i != nullptr && i->data < data) 
    i = i->next;

  if(i == list->head) { //cuando val se debe insertar antes del head (pushfront)
    nodo->prev = nullptr;
    nodo->next = list->head;
    list->head->prev = nodo;        
    list->head = nodo;
  } else if(i == nullptr){ //cuando val se inserta al final (pushback)
    nodo->next = nullptr;  
    nodo->prev = list->tail;
    list->tail->next = nodo;        
    list->tail = nodo;
  } else { //cuando val se inserta en otra posicion (insert)
    nodo->prev = i->prev;  
    nodo->next = i;
    i->prev->next = nodo;
    i->prev = nodo;
}
}


void display(DoubleList* &list) {
  cout << " <-> ";
  for(Node* i = list->head; i != nullptr; i = i->next) 
    cout << i->data << " <-> ";
  cout << endl;
}

void displayAsc(DoubleList* &list) {
  for (Node* temp = list->head; temp != nullptr; temp=temp->next)
    cout<<temp->data<<",";
  cout<<endl;
}
void displayDesc(DoubleList* &list) {
  for (Node* temp = list->tail; temp != nullptr; temp=temp->prev)
    cout<<temp->data<<",";
  cout<<endl;
}

int main() {
  DoubleList* list = new DoubleList();
  SortedInsert(list, 2);
  display(list); // 2
  SortedInsert(list, 5);
  display(list); // 2, 5
  SortedInsert(list, 1);
  display(list); // 1, 2, 5  
  SortedInsert(list, 10);
  display(list); // 1, 2, 5, 10  
  SortedInsert(list, 4);
  display(list); // 1, 2, 4, 5, 10  
}
