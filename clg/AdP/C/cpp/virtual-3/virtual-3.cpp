#include <iostream>

using namespace std;

class Base {

  virtual void show() = 0;
};

class Derived : public Base {};

int main() { Derived d; }
