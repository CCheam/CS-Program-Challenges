#include <iomanip>
#include <iostream>
#include<cstdio>
int main() {
  int weight, distance,rAm;
  double rate,price;
  std::cout<<"Weight of package(in kg): "<<std::endl;
  std::cin>>weight;
  while(weight<=0||weight>=20){
    std::cout<<"Error. Cannot accept this weight. Please input new weight: "<<std::endl;
  std::cin>>weight;
  }
  std::cout<<"Distance to be shipped(miles): "<<std::endl;
  std::cin>>distance;
  while(distance<10||distance>3000){
    std::cout<<"Error. Distance is too much/little. Please input new distance: "<<std::endl;
  std::cin>>distance;
  }
  //rate calculations
  if(weight<=2){ 
    rate=1.1;
    }
  else if(weight>2 && weight <=6){
    rate=2.2;
  }
  else if(weight>6 && weight <=10){
    rate=3.7;
  }
  else if(weight>2 && weight <=6){
    rate=4.8;
  }
  rAm=distance/500;
  price=rate*rAm;
  std::cout<<"Cost to ship is $";
  printf("%.2f\n", price);
    return 0;
}