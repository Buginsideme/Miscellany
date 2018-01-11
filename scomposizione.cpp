 /* Scomposizione in fattori di un numero*/
#include <iostream>
using namespace std;

int main(){
        int n;   //numero da scomporre
        cout<<"\nInserisci il numero da scomporre: ";
        cin>>n;
        cout<<"\nI fattori di "<<n<<" sono: ";
        //Scompongo in fattori
        for (int i=1; i<=n; ++i) {
                if ((n%i) == 0)
                        cout<<i;
        }
