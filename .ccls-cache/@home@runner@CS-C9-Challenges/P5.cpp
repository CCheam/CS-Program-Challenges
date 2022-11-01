
#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;

int doSomething(int *x, int *y) {
  int temp = *x;
  *x = *y * 10;
  *y = temp * 10;
  return *x + *y;
}
int main() {
  int a, b, e;
  int *c = &a;
  int *d = &b;
  a = 5;
  b = 7;
  e = doSomething(c, d);
  cout << a << " " << b << " " << e;
  return 0;
}
