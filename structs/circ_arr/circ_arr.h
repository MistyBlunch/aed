#ifndef CIRC_ARR_H
#define CIRC_ARR_H

#include <iostream>
using namespace std;

template<typename T>
struct CircularArr {
  T* _front;
  T* _rear;
  T* _arr;
  int capacity;

  CircularArr(int capacity) : 
    capacity(capacity), 
    _arr(new T[capacity]), 
    _front(nullptr), 
    _rear(nullptr) {}
  ~CircularArr() {
    delete[] _arr;
    delete _front;
    delete _rear;
  }

  T front() {
    if(empty()) throw "Array is empty";

    cout << "No es empty" << endl;
    return 0;
  }

  // T back() {

  // }

  // void push_front(T) {

  // }

  // void push_back(T) {

  // }

  // T pop_front() {

  // }
  // T pop_back() {

  // }

  // void insert(int, T) {

  // }

  // T operator[](const int *&val) {

  // }

  bool empty() {
    return !(_rear && _front);
  }

  // bool is_full() {

  // }

  // int size() {

  // }

  // void clear() {

  // }

  // void sort() {

  // }

  T* reverse() {

  }
};

#endif