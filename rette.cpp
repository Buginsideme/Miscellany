/*Scrivere un programma che, inseriti i coefficienti a,b,c
delle equazioni di due rette, dice se le due rette sono parallele, perpendicolari,
incidenti o coincidenti.*/
#include<iostream>
using namespace std;

int main(){
  double a1, b1, c1, a2, b2, c2, m1, m2, q1, q2;
  cout<<"\nInserire il coefficiente a della prima retta: ";
  cin>>a1;
  cout<<"\nInserire il coefficiente b della prima retta: ";
  cin>>b1;
  cout<<"\nInserire il coefficiente della c della prima retta: ";
  cin>>c1;
  cout<<"\nInserire il coefficiente a della seconda retta: ";
  cin>>a2;
  cout<<"\nInserire il coefficiente della b della seconda retta: ";
  cin>>b2;
  cout<<"\nInserire il coefficiente della c della seconda retta: ";
  cin>>c2;
  if(b1==0 && b2==0){
    if((c1/a1)==(c2/a2))
      cout<<"\nLe due rette sono coincidenti.0";
    else
      cout<<"\nLe due rette sono parallele.";
  }
  if(b1==0 && b2!=0){
    if((a2/b2)==0)
      cout<<"\nLe due rette sono perpendicolari.";
    else
      cout<<"\nLe due rette sono incidenti.";
  }
  if(b1!=0 && b2==0){
    if((a1/b1)==0)
      cout<<"\nLe due rette sono perpendicolari.";
    else
      cout<<"\nLe due rette sono incidenti.";
    }
    if(b1!=0 && b2!=0){
//calcolo dei coefficienti m e q
      m1=-(a1/b1);
      q1=(c1/a1);
      m2=-(a2/b2);
      q1=(c2/a2);
      if(m1==m2){
        if(q1==q2)
          cout<<"\nLe due rette sono coincidenti.";
        else
          cout<<"\nLe due rette sono parallele.";
      }
      else{
        if(m1==-(1/m2)||m2==-(1/m1))
          cout<<"\nLe due rette sono perpendicolari.";
        else
          cout<<"\nLe due rette sono incidenti.";
      }
    }
    cout<<"\n\n";
}
