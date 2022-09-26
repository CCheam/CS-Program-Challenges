#include <iostream>
using namespace std;

// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength(double & l){
  cout<<"Input length: ";
  cin>>l;
  return l;
}

double getWidth(double & w){
  cout<<"Input width: ";
  cin>>w;
  return w;
}

double getArea(double &l,double&w,double &a){
  a=l*w;
  return a;
}

void displayData(double &l,double &w,double &a){
  cout<<"Length: "<<l<<endl;
  cout<<"Width: "<<w<<endl;
  cout<<"Area: "<<a<<endl;
}
int main()
{
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   getLength(length);
   
   // Get the rectangle's width.
   getWidth(width);
   
   // Get the rectangle's area.
   getArea(length,width,area);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *

