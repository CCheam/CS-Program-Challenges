
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <ctype.h>
using namespace std;

const int col=4;
const int row=4;

int getTotal(int (&arr)[col][row]){
  int sum=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      sum+=arr[i][j];
    }
    
  }
  return sum;
}

double getAverage(int (&ar)[col][row]){
  double avg=0;
  avg=((double)getTotal(ar))/(col*row);
  return avg;
}

int getRowTotal(int (&arr)[col][row],int rw){
  int sum=0;
  for(int i=0;i<col;i++){
    sum+=arr[rw][i];
  }
  return sum;
}

int getColumnTotal(int (&arr)[col][row],int cl){
  int sum=0;
  for(int i=0;i<col;i++){
    sum+=arr[i][cl];
  }
  return sum;
}

int getHighestInRow(int (&arr)[col][row],int rw){
  int high=0;
  for(int i=0;i<col;i++){
    if(arr[rw][i]>high){
      high=arr[rw][i];
    }
  }
  return high;
}

int getLowestInRow(int (&arr)[col][row],int rw){
  int low=2147483647;
  for(int i=0;i<col;i++){
    if(arr[rw][i]<low){
      low=arr[rw][i];
    }
  }
  return low;
}
int main() {
int lowest = 0;
int grid[col][row] = {{8,0,3,6}, {19,14,7,8}, {15,4,11,10},{1,5,11,6}};
  cout<<getAverage(grid)<<endl;
  cout<<getTotal(grid)<<endl;
  cout<<getColumnTotal(grid,0)<<endl;
  cout<<getRowTotal(grid,1)<<endl;
cout<<getHighestInRow(grid,2)<<endl;
 cout<<getLowestInRow(grid,3)<<endl;
  return 0;
}
