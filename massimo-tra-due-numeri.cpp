//SORRY FOR MY ENGLISH
/*Maximum between two numbers*/
#include <iostream>
using namespace std;


int main(){ 
  int first, second, maximum;
  cout << "\nInsert first :";
  cin >> first;
  cout << "\nInsert second :";
  cin >> second;
  //M:The comparison was done by using conditional operator ?
  maximum = first<second ? second:first;  
  cout<<"\nThe maximum is: "<<maximum;
  cout<<"\n\n";
}
