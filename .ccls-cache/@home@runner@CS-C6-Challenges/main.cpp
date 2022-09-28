#include <iostream>
#include <cstdlib>
using namespace std;

int coinToss(){
   int coin=rand()%2+1;
  cout<<coin;
  if(coin==1){
    cout<<"heads";
  }
  else {
    cout<<"tails";
  }
}
int main()
{
  int t;
  cout<<"input times to be flipped"<<endl;
  cin>>t;
  for(int i=0;i<t;i++){
     int coin=rand()%2+1;
  cout<<coin;
  if(coin==1){
    cout<<"heads";
  }
  else {
    cout<<"tails";
  }
  }

   return 0;
}


