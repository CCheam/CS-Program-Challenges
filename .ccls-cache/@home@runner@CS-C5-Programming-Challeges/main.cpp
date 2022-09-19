#include <iostream>
#include <iomanip>
int main() {
  int num=1;
  int years,months,total;
  double avg;
  total=0;
  months=0;
  std::cout<<"Input # of years: "<<std::endl;
  std::cin>>years;
  while(num<=years){
    for(int i=0;i<12;i++) {
      int mRain;
      std::cout<<"Input amount of rainfall for Month "<<i+1<<": "<<std::endl;
      std::cin>>mRain;
    total+=mRain;
      months++;
    }
    num++;
  }
avg=total/months;
std::cout<<"Total Months: "<<months<<std::endl;
std::cout<<"Total Rainfall: "<<total<<" inches"<<std::endl;
std::cout<<"Avg Rainfall: "<<avg<<" inches"<<std::endl;
  return 0;
  }