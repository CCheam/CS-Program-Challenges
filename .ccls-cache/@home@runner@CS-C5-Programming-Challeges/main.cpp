#include <iostream>
#include <iomanip>
int main() {
  int year =1;
  double rise =1.5;
  std::cout<<"Table of amount of ocean rise assuming 1.5mm yearly rise"<<std::endl;
  while(year<=25){
    double amt=rise*year;
    std::cout<<"Year: "<<year<<"   Rise Amount: "<<amt<<"mm"<<std::endl;
    year++;
  }
 
  return 0;
}