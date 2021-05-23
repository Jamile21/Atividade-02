#include <iostream>
using namespace std;


//Maximo e Minimo
void mm (int *v, int num, int *min, int *max) {
int i;
*min = v[0];
*max = v[0];
for (i = 1; i < num; i++) {
if (v[i] > *max) {
*max = v[i];
}
else  {
  if (v[i] < *min) {
*min = v[i];
     }
   }
  }
}


int main() {
int *vet;
int num, i, minimo, maximo;

// usuário determina o tamanho do vetor
cout<<"Digite o tamanho do vetor:"<<endl;
cin>>num; 

vet = new int [num];

for (i = 0; i < num; i++) {
cout<<"Digite um numero de 0 a 9:"<<endl;
cin>> vet[i];
   }

mm(vet, num, &minimo, &maximo);

cout<< "Max: " << maximo << " Mim: " << minimo;
return 0;

}
