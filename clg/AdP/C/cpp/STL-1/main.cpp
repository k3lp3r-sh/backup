#include <iostream>

template <class T>
T GetMax(T a, T b) {
  return (a>b?a:b);
}

using namespace::std;

int main () {
  int i = 5, j = 6, k;
  long l=10, m=5, n;

  k = GetMax(i, j);
  n = GetMax(l, m);

  cout << k << endl; cout << n << endl;

  return 0;
}
