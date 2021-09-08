#include <iostream>
#include "selection.h"
using namespace std;

int main() {
  int size = 7;
  int* arr_i = new int[size] {9, 11, 4, 5, 5, 7, 2};

  double* arr_d = new double[size] {9.5, 11.3, 4.0, 4.1, 5.3, 7.2, 2.1};

  char* arr_c = new char[size] {'g', 'b', 'c', 'a', 'f', 'y', 's'};

  selection_sort(arr_i, size);
  print(arr_i, size);

  selection_sort(arr_d, size);
  print(arr_d, size);

  selection_sort(arr_c, size);
  print(arr_c, size);

  delete [] arr_i;
  delete [] arr_d;
  delete [] arr_c;
}