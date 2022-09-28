#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {
  ifstream c;
  ofstream oFile;
  int sum=0;
  int i;
  double numNum,avg;
  c.open("Random.txt");
  while(c>>i){
    sum+=i;
    numNum++;
  }
  c.close();
  avg=sum/(numNum);
  //write to file
  oFile.open("Output.txt");
  oFile<<"Sum: "<<sum<<endl;
  oFile<<"Total #s read: "<<numNum<<endl;
  oFile<<"Average: "<<avg<<endl;
  oFile.close();
  //output
  cout<<"Sum: "<<sum<<endl;
  cout<<"Total #s read: "<<numNum<<endl;
  cout<<"Average: "<<avg;
  return 0;
  }