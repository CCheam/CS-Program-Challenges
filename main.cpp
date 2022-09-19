#include <iostream>
#include <iomanip>
int main() {
  int inp;
  std::cout<<"Input a #:"<<std::endl;
  std::cin>>inp;
for(int i =0;i<inp;i++){
  for(int j=0;j<inp;j++){
    std::cout<<"x";
  }
  std::cout<<std::endl;
}
  return 0;
  }