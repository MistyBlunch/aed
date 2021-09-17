#include <iostream>
#include <string>

using namespace std;

struct Node {
  int data;
  Node* next;
  Node* prev;
};

struct DoubleList {
  Node* head;
  Node* tail;
};

void SortedInsert(DoubleList* list, int data) {
  Node* nodo = new Node;
  nodo->data = data;
  nodo->next = nullptr;
  nodo->prev = nullptr;
  if(list->head == nullptr && list->tail == nullptr) {
    list-> head = nodo;
    list-> tail = nodo;
    return;
  }

  Node* i;
  for(i = list->head; i != nullptr && i->data < data; i = i->next);

  if(i != nullptr) {
    if(i->prev != nullptr) {
      Node* p = i->prev;
      p->next = nodo;
      nodo->prev = p;
    } else {
      list->head = nodo;
    }
    i->prev = nodo;
    nodo->next = i;
  } else {
    list->tail->next = nodo;
    nodo->prev = list->tail;
    list->tail = nodo;
  }
  
}

void display(DoubleList* head) {
  cout << " <-> ";
  for(Node* i = head->head; i != nullptr; i = i->next) 
    cout << i->data << " <-> ";
  cout << endl;
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
