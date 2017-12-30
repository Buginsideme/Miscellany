//SORRY I'LL TRANSLATE IT LATER
/*programma che risolva un'equazione di 2°grado del tipo ax2+bx+c=0,
dove i coefficienti a,b,c sono inseriti dall'utente da tastiera.*/
/* Il programma leggerà i coefficienti a,b,c, dopodichè calcolerà il delta
e con 3 if controllerà se il delta è maggiore, minore o uguale a 0 e
risolverà l'equazione nei 3 casi diversi comunicando alla fine il risultato.*/
#include<iostream>
#include<math.h>
using namespace std;


int main(){
  float a,b,c,x,x1,x2,delta;
  cout<<"\nInserisci i coefficienti dell'equazione: ax^2 + bx +c=0: ";
  cout<<"\nIl coefficiente di a è: ";
  cin>>a;
  cout<<"\nIl coefficiente di b è: ";
  cin>>b;
  cout<<"\nIl termine noto è: ";
  cin>>c;
  delta=(b*b)-(4*a*c);
  if(delta<0)
      cout<<"\nL'equazione non ha radici reali.";
  if(delta=0){
    x=-b/(2*a);
    cout<<"\nL'equazione ah deu radici coincidenti che valgono: "<<x;
  }
  if(delta>0){
      x1=(-b+sqrt(delta))/(2*a);  //calcola le due radici
      x2=(-b-sqrt(delta))/(2*a);
      cout<<"\nL'equazione ha due radici distinte e sono: "<<x1<<x2;
  }
  cout<<"\n\n";
}
