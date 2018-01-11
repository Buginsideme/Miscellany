//Legge un numero intero e lo eleva ad una potenza inserita da tastiera
#include<iostream>
using namespace std;

int base,esp,ris=0,x;
int main(){
  cout<<"\nInserire la base: ";
  cin>>base;
  cout<<"\nInserire l'esponente: ";
  cin>>esp;
  if(esp==0){
    ris=1;
  }
  else{
    ris=base;
    for(x=1;x<esp; x++)
    ris*=base;
  }
  cout<<"\nIl risultato è: "<<ris;
  cout<<"\n\n";
}
