#include <iostream>
using namespace std;

int func(int x) {
  if (x % 2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }

  return 0;
}

int func(int x, int y) {
  if (x > y) {
    cout << x << ">" << y << endl;
  } else if (y < x) {
    cout << x << "<" << y << endl;
  } else {
    cout << x << "=" << y << endl;
  }
}

int main() {
  func(10);
  func(5, 6);
}
