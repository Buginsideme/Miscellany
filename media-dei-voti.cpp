//SORRY I'LL TRANSLATE IT LATER
//programma che calcola la media dei voti di una classe
/*Prima inserisco il numero di alunni,
dopodichè con un ciclo for verrà richiesto il voto dell'alunno per un numero
 di volte pari a n, e man mano verrà sommato alla variabile somma.
 Infine verrà calcolata e comunicata la media.*/

#include<iostream>
using namespace std;

int main(){
  int alunni;
  float somma, media, voto, n;
  cout<<"\nInserisci il numero di alunni: ";
  cin>>alunni;
  for(n=1; n<=alunni; n++){    //M:ciclo per l'inserimento dei voti
    cout<<"\nInserisci il voto di ogni alunno: ";
    cin>>voto;
    somma+=voto;
  }
  media=somma/alunni;     //M:Calcolo della media
  cout<<"\nLa media dei voti dei "<<alunni<<" alunni è: "<<media;
  cout<<"\n\n";
}
