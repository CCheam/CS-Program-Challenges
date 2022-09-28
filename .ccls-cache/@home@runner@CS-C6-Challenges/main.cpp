#include <iostream>
#include <cstdlib>
using namespace std;

int coinToss(){
   int coin=rand()%2+1;
  if(coin==1){
    cout<<"heads"<<endl;
  }
  else {
    cout<<"tails"<<endl;
  }
  return coin;
}
int main()
{
  int t;
  cout<<"input times to be flipped"<<endl;
  cin>>t;
  for(int i=0;i<t;i++){
 coinToss();
   
}
  return 0;
  }


