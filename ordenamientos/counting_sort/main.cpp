#include "countingSort.h"

int main() {
  int n;
  cout << "Ingrese numero de elementos:";
  cin >> n;
  int *arr = new int(n);
  cout << "Ingrese los elementos:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  countingSort(arr, n);
  printArr(arr, n);
  return 0;
}