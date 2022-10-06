
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <vector>
#include <ctype.h>
using namespace std;

int scoring(char ans[],char inp[]){
  int sc=0;
  for(int i=0;i<20;i++){
    if(inp[i] ==ans[i]){
      sc++;
    }
  }
  return sc;
}

bool PassCheck(char ans[],char inp[]){
bool p=false;
  int s=0;
  s=scoring(ans,inp);
  if(s>=15){
    p=true;
  }
  return p;
}

vector<int> findWrongQuestions(char ans[], char inp[]){
  vector<int> wrong;
  for(int i=0;i<20;i++){
    if(inp[i] !=ans[i]){
      wrong.push_back(i+1);
    }
  }
  return wrong;
}

void printWrongQuestions(vector<int> wQ){
  cout<<"Questions ";
  for(int i=0;i<wQ.size();i++){
    cout<<wQ.at(i)<<", ";
  }
  cout<<" were wrong";
}

int main() {
  //Setup
char ansArray[]={'B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A'};
char ansInp[20];
vector <int> wrongQs;
  int score=0;
  bool pass=false;
  //input
  for(int i=0;i<20;i++){
      cout<<"Input an answer for Question "<<i+1<<" (A,B,C,D):"<<endl;
    while(1){
    cin>>ansInp[i];
      if(isalpha(ansInp[i])){
        break;
      }
      else{
        cout<<"Not a letter, try again!"<<endl;
        cin>>ansInp[i];
      }
    }
    
  }
pass=PassCheck(ansArray,ansInp);
score=scoring(ansArray,ansInp);
wrongQs=findWrongQuestions(ansArray,ansInp);
//output
  if(pass==true){
    cout<<"You have passed the written portion of the driving exam!"<<endl;
  }
  else{
    cout<<"You didn't pass."<<endl;
  }
  cout<<score<<" answers were correct"<<endl;
  cout<<20-score<<" answers were incorrect"<<endl;
  printWrongQuestions(wrongQs);
  return 0;
}
