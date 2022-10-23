#include <iostream>
#include <string>
using namespace std;

void swapper(string &x, string &y) {
  string temp;
  temp = x;
  x = y;
  y = temp;
}
void selectionSort(string array[], int size) {
  string lowestPosition;
  string lowestValue;
  int lowestP;
  for (int i = 0; i < size - 1; i++) {
    // first, find position of lowest element in positions i through size-1
    lowestValue = array[i];
    lowestPosition = "Z";
    for (int j = i + 1; j < size; j++) {
      if (array[j] < lowestValue) {
        lowestP = j;
        lowestValue = array[j];
      }
    }
    // now, swap the lowest element we found with element at position I
    swapper(array[i], array[lowestP]);
  }
}

int main() {
  const int NUM_NAMES = 20;
  string names[NUM_NAMES] = {
      "Collins, Bill",  "Smith, Bart",   "Allen, Jim",       "Griffin, Jim",
      "Stamey, Marty",  "Rose, Geri",    "Taylor, Terri",    "Johnson, Jill",
      "Allison, Jeff",  "Looney, Joe",   "Wolfe, Bill",      "James, Jean",
      "Weaver, Jim",    "Pore, Bob",     "Rutherford, Greg", "Javens, Renee",
      "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon",     "Holland, Beth"};
  selectionSort(names, NUM_NAMES);
  cout << names;
  return 0;

  // Insert your code to complete this program
}
