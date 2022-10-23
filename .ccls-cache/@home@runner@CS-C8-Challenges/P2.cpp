/*
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

bool checkFor(int arr[], int in) {

  for (int i = 0; i < sizeof(arr); i++) {
    if (arr[i] == in) {
      return true;
    } else {
      return false;
    }
  }
}
int main() {
  int inp;
  bool valid;
  int arr[] = {13579, 26791, 26792, 33445, 55555,
               62483, 77777, 79422, 85647, 93121};
  cout << "Input Winning Ticket #" << endl;
  cin >> inp;
  valid = checkFor(arr, inp);
  if (valid) {
    cout << "Winning Ticket!" << endl;
  } else {
    cout << "Not a winner....";
  }
  return 0;
}
