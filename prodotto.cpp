//SORRY FOR MY ENGLISH
/*To verify if a number is the product of the others two*/
#include<iostream>
using namespace std;

int a, b, c; //the values to be checked
int main(){
  cout<<"\nInsert first: ";
  cin>>a;
  cout<<"\nInsert second: ";
  cin>>b;
  cout<<"\nInsert third: ";
  cin>>c;
  //controll
  if(a==b*c||b==a*c||c==a*b)
    cout<<"\nYes";
  else
    cout<<"\nNo";
    cout<<"\n\n";
}
