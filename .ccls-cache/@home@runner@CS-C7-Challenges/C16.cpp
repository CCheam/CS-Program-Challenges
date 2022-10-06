/*
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <ctype.h>
using namespace std;

const int col=4;
const int row=4;

int getTotal(int arr[col][row]){
  int sum=0;
  for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
      sum+=arr[i][j];
    }
    
  }
  return sum;
}
int main() {
int lowest = 0;
int grid[col][row] = {{8,0,3,6}, {19,14,7,8}, {15,4,11,10},{1,5,11,6}};
  cout<<(getTotal(grid));
  return 0;
}
*/