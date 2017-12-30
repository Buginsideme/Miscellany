/*programma che restituisce il maggiore e il minore tra una serie
di numeri inseriti da tastiera*/
#include<iostream>
using namespace std;


int main(){
  int num,massimo=0,minimo=0;
  cout<<"\nInserire il primo numero (0 per uscire): ";
  cin>>num;
  massimo=num;
  minimo=num;
  while(num){
    cout<<"\nInserisci gli altri numeri: ";
    cin>>num;
    if(num==0){
      cout<<"\nHai inserito 0! Programma termianto.";
    }
    else{
      if(num<minimo)
      minimo=num;
      else if(num>massimo)
      massimo=num;
    }
  }
  cout<<"\nIl maggiore dei numeri è "<<massimo<<" è il minimo è "<<minimo;
  cout<<"\n\n";
}
