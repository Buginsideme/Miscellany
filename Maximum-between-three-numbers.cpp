//SORRY FOR MY ENGLISH
/*Maximum between three numbers*/
#include <iostream>
using namespace std;


int main() {
  int a,b,c, maximum; //adding the variable maximum I reduce the comparisons to two
  cout<<"\nInsert the first: ";
  cin>>a;
  cout<<"\nInsert the second: ";
  cin>>b;
  cout<<"\nInsert the third: ";
  cin>>c;
  //Comparisons to determine the maximum
  maximum=a;
  if(b>maximum)
    maximum=b;
  if(c>maximum)
    maximum=c;
  cout<<"\nThe maximum is "<<maximum;
  cout<<"\n\n";
}
