#include <iostream>

using namespace std;

class Base {
public:
  void fun1() { cout << "Base-1\n"; }
  virtual void fun2() { cout << "Base-2\n"; }
  virtual void fun3() { cout << "Base-3\n"; }
  virtual void fun4() { cout << "Base-4\n"; }
};

class Derived : public Base {

public:
  void fun1() { cout << "Derived-1\n"; }
  void fun2() { cout << "Derived-2\n"; }
  void fun3() { cout << "Derived-3\n"; }
};

int main() {
  Base *p;
  Derived obj;
  p = &obj;

  p->fun1();
  p->fun2();
  p->fun3();
  p->fun4();

  return 0;
}
