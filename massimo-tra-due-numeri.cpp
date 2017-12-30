//SORRY FOR MY ENGLISH
/*Maximum between two numbers*/
#include <iostream>
using namespace std;

int first, second, maximum;

int main(){
  cout << "\nInsert first :";
  cin >> first;
  cout << "\nInsert second :";
  cin >> second;
  maximum = first<second ? second:first;  //M:The comparison was done by using conditional operator ?
  cout<<"\nThe maximum is: "<<maximum;
  cout<<"\n\n";
}
