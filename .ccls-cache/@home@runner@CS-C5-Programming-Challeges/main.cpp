#include <iostream>
#include <iomanip>
int main() {
  int num=1;
  int years,months,total, mRain;
  double avg;
  std::cout<<"Input # of years: "<<std::endl;
  std:cin>>years;
  while(num<=years){
    for(inti=0;i<12,i++){
      std::cout<<"Input amount of rainfall for Month "<<i": "<<std::endl;
      std:cin>>mRain;
    total+=mRain;
      months++;
    }
    num++;
  }
avg=total/months;
std::cout<<"Total Months: "<<months<<std::endl;
  return 0;
}