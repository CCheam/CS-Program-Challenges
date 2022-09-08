#include <iostream>
#include <iomanip>
int main() {
  int month,day,year,mult;
  std::cout<<"Enter a date in form M/D/Y"<<std::endl;
  std::cin >> month >> day >> year;
  mult=month*day;
if (mult == year){
  std::cout <<"This date is magical."<<std::endl;
}
  else{
    std::cout <<"This date isn't magical."<<std::endl;
  }
    return 0;
}