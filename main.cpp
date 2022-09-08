#include <iostream>
#include <iomanip>
int main() {
  int seconds, minutes, hours, days;
  std::cout<<"Enter a number of seconds"<<std::endl;
  std::cin >> seconds;
  minutes=seconds/60;
  hours=seconds/3600;
  days=seconds/86400;
  if(seconds>=60){
    if(seconds>=3600){
      if(seconds>=86400){
        std::cout<<"In "<<seconds<<" seconds there are approximately "<<days<<" days"<<std::endl;
    return 0;
      }
      std::cout<<"In "<<seconds<<" seconds there are approximately"<<hours<<" hours"<<std::endl;
    return 0;
    }
    std::cout<<"In "<<seconds<<" seconds there are approximately "<<minutes<<" minutes"<<std::endl;
    return 0;
  }
  std::cout<<seconds<<" seconds is too small to be any other unit of time"<<std::endl;
    return 0;
}