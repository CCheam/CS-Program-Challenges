#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

double PValueFunc(double &fVal,double &inr, int &y){
  double PValue;
  double q;
q=pow(1+inr,y);
  PValue=fVal/q;
  return PValue;
}

int main() {
  int years;
  double interest,fValue,pValue;
//input values
cout<<"Input future value that you want: "<<endl;
cin>>fValue;
cout<<"Input interest rate as a decimal: "<<endl;
cin>>interest;
cout<<"Input # of years money will collect interest for:"<<endl;
cin>>years;
  //function
  pValue=PValueFunc(fValue,interest,years);
  //output
  cout<<"You need to deposit $"<<pValue<<" to have $"<<fValue<<" in "<<years<<" years";
  return 0;
}

