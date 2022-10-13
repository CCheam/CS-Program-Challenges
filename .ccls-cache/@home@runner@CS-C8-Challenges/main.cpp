#include <iomanip>
#include <iostream>
#include<cstdio>

using namespace std;

bool checkFor(int arr[],int in){

for(int i=0;i<sizeof(arr);i++){
  if(arr[i]==in){return true;}
  else{return false;}
}
}
int main() {
  int inp;
  bool valid;
int arr[]={5658845, 4520125, 7895122 ,8777541 ,8451277, 1302850,8080152,4562555,5552012,5050552,7825877, 1250255,1005231,6545231,3852085,7576651,7881200,4581002};
  cout<<"Input charge account #"<<endl;
  cin>>inp;
  valid=checkFor(arr,inp);
  if(valid){
    cout<<"Valid Account #"<<endl;
  }
  else{
    cout<<"Invalid Account #";
  }
  return 0;
}