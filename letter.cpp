//Sorry i'll traslate it later.
//Conversione da minuscolo a maiuscolo
#include<iostream>
using namespace std;


int main(){
  char lettera;
  cout<<"\nInserire la lettera da convertire: ";
  cin>>lettera;
  if(lettera>='a' && lettera<='z')
    lettera -=32;
    cout<<"\nEcco la lettera "<<lettera<<" convertita.";
    cout<<"\n\n";
}
