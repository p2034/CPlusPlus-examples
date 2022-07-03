#include <iostream>



class A {
private:
  int a_private = 1;
protected:
  int a_protected = 2;
public:
  int a_public = 3;

  virtual void print() {
    std::cout << "\tPublic: " << a_public << std::endl;
    std::cout << "\tProtected: " << a_protected << std::endl;
    std::cout << "\tPrivate: " << a_private << std::endl;
  }
};



class PUBLIC_A : public A {
public:
  virtual void print() {
    std::cout << "\tPublic: " << a_public << std::endl;
    std::cout << "\tProtected: " << a_protected << std::endl;
    // std::cout << "\tPrivate: " << a_private << std::endl;
  }
};

class PROTECTED_A : protected A {
public:
  virtual void print() {
    std::cout << "\tPublic: " << a_public << std::endl;
    std::cout << "\tProtected: " << a_protected << std::endl;
    // std::cout << "\tPrivate: " << a_private << std::endl;
  }
};

class PRIVATE_A : private A {
public:
  virtual void print() {
    std::cout << "\tPublic: " << a_public << std::endl;
    std::cout << "\tProtected: " << a_protected << std::endl;
    // std::cout << "\tPrivate: " << a_private << std::endl;
  }
};



int main() {
  A a1;
  std::cout << a1.a_public << std::endl;
  // std::cout << a1.a_protected << std::endl;
  // std::cout << a1.a_private << std::endl;
  a1.print();

  PUBLIC_A a2;
  std::cout << a2.a_public << std::endl;
  // std::cout << a2.a_protected << std::endl;
  // std::cout << a2.a_private << std::endl;
  a2.print();

  PROTECTED_A a3;
  // std::cout << a3.a_public << std::endl;
  // std::cout << a3.a_protected << std::endl;
  // std::cout << a3.a_private << std::endl;
  a3.print();

  PRIVATE_A a4;
  // std::cout << a4.a_public << std::endl;
  // std::cout << a4.a_protected << std::endl;
  // std::cout << a4.a_private << std::endl;
  a4.print();

  return 0;
}