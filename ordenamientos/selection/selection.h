#ifndef SELECTION_H
#define SELECTION_H

#include <iostream>
using namespace std;

template <typename T>
void swapp(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}


template <typename T>
void print(T* arr, int size) {
  for(int i=0; i<size; i++)
    cout << arr[i] << endl;
}


template <typename T>
void selection_sort(T *arr, int size) {
  int id_selected;

  for(int i=0; i<size; i++) {
    id_selected = i;

    for(int j=i; j<size; j++) 
      if(arr[id_selected] > arr[j])
        id_selected = j;
      
    swapp(arr[i], arr[id_selected]);
  }
}

#endif