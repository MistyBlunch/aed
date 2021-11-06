#include <iostream>
using namespace std;

struct node {
  int data;
  node* next;

  node(int data) : data(data) {}
};

struct ll {
  int size;
  node* head;

  ll() : head(nullptr), size(0) {}

  void push_front(int n) {
    node* nd = new node(n);

    if(head == nullptr) {
      head = nd;
      return;
    }

    nd->next = head;
    head = nd;
  }

  // node* push_back_recur(node* nd, int n) {
  //   if(nd == nullptr) {
  //     push_front(n);
  //   }
  // }

  // void push_back(int n) {
  //   push_back_recur(head, n);
  // }

  void display() {
    for(node* tmp=head; tmp!=nullptr; tmp=tmp->next) {
      cout << tmp->data << ' ';
    }
    cout << endl;
  }
};


int main() {
  ll* lista = new ll;
  lista->push_front(3);
  lista->push_front(2);
  lista->push_front(1);

  lista->push_back(4);
  lista->push_back(5);

  lista->display();
}
