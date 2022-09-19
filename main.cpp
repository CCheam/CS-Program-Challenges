#include <iostream>
#include <iomanip>
int main() {
 double calPMin=3.9;
  double calories;
  for(int i=10;i<=30;i+=5){
    calories=calPMin*i;
std::cout<<"Calories burned at "<<i<<" minutes: "<<calories<<std::endl;
  }
}