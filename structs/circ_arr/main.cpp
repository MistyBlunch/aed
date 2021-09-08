#include <iostream>
#include "circ_arr.h"

using namespace std;

int main() {
  cout << "a\n";
  CircularArr<int> ca(5);
  ca.push_front(1);
  cout << ca.front() << endl;
}