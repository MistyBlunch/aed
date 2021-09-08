#ifndef CIRC_ARR_H
#define CIRC_ARR_H

#include <iostream>
using namespace std;

template<typename T>
struct CircularArr {
  T* arr;
  int rear;
  int frnt;
  int capacity;

  CircularArr(int capacity) : 
    capacity(capacity), 
    arr(new T[capacity]), 
    frnt(0), 
    rear(0) {}
  ~CircularArr() {
    delete[] arr;
  }

  T front() {
    // if(empty()) throw "Array is empty";

    return arr[frnt];
  }

  // T back() {

  // }

  void push_front(const T val) {
    if(frnt == 0) {
      arr[0] = val;
    }
    else {
      rear++;
      arr[rear] = val;
    }
  }

  // void push_back(T) {

  // }

  // T popfrnt() {

  // }

  // T pop_back() {

  // }

  // void insert(int, T) {

  // }

  // T operator[](const int *&val) {

  // }

  // bool empty() {
  //   //TODO
  // }

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