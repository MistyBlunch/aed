#pragma once
#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;

  Node(int dat) : data(data) {}
  Node() {}

  Node* push_back(int value) {
    cout << "value: " << value << endl;
    if(!data) {
      data = value;
      return this;
    }

    this->next = push_back(value);
  }
};