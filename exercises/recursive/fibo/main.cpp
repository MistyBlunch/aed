#include <iostream>
#include <vector>
#include <chrono> 
using namespace std;
using namespace chrono; 


long long fibo(int n) {
  if(n == 1)
    return 1;
  if(n == 0)
    return 0;
  
  long long res = fibo(n-1) + fibo(n-2);
  return res;
}


long long res = 0;
vector<long long> v;

auto print_vect = [](vector<long long>& v) -> void {
  for(size_t i=0; i<v.size(); i++) {
    cout << "vector pos " << i << ": " << v[i] << '\n';
  }
};

long long mem_fibo(int n) {
  if(n-1 == 0) 
    v.push_back(0);

  if(n == 1) {
    v.push_back(1);
    return 1;
  }
  
  res = mem_fibo(n-1) + v[n-2];
  v.push_back(res);
  return res;
}



int main() {
  auto start = system_clock::now(); 
  cout << mem_fibo(50) << '\n';
  auto stop = system_clock::now(); 
  duration<float,milli> duration = stop - start; 

  cout << "TIME: " << duration.count() << " milli" << endl; 
  // print_vect(v);
}
