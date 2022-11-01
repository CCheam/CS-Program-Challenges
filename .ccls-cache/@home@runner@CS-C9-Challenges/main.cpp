#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;

int modeFunc(int *a, int s);
int main() {
  const int size = 2;
  int data[size];
  int *a = data;
  return 0;
}

int modeFunc(int *a, int s) {
  int maxV = 0;
  int mcount = 0;
  for (int i = 0; i < s; i++) {
    int count = 0;
    for (int j = 0; j < s; j++) {
      if ((a[i] == a[j])) {
        count++;
      }
    }
  }

  if (mcount == 1) {
    return -1;
  }
};