#include <iostream>

using namespace std;

class base {
protected:
  int x;

public:
  virtual void fun() = 0;
  base(int i) {
    x = i;
    cout << "Constructor of the bse called" << endl;
  }
};

class Derived : public base {
  int y;

public:
  Derived(int i, int j) : base(i) { y = j; }
  void fun() { cout << "x = " << x << " y = " << y << endl; }
};

int main() {
  Derived d(4, 5);
  d.fun();

  base *ptr = new Derived(6, 7);

  ptr->fun();

  return (0);
}
