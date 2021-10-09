#include <iostream>
using namespace std;

void print_numbers(int i, int n) {
  if(i == n) {
    cout << i << endl << i << ' ';
    return;
  }

  cout << i << ' ';
  if(i > n)
    print_numbers(i-1, n);
  else 
    print_numbers(i+1, n);
  cout << i  << ' ';
}


// int i = 1;
// void print_numbers_2(int n) { 
//   if(i >= n+1) {
//     cout << endl;
//     return;
//   }

//   cout << i << ' ';
//   i++;
//   print_numbers_2(n);
//   i--;
//   cout << i << ' ';
// }

int main() {
  print_numbers(1, 10);
  cout << "\n\n";
  // print_numbers_2(10);
  print_numbers(10, 1);
}