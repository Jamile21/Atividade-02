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

//usuario preenche o vetor
for (i = 0; i < num; i++) {
cout<<"Digite um numero de 0 a 9:"<<endl;
cin>> vet[i];
cout<<endl;
   }

mm(vet, num, &minimo, &maximo);


//saída do vetor digitado 
for (int j= 0; j < num; j++) {
cout<<vet[j]<<",";
   }   

//saida do Max e Min
cout<<endl;
cout<< "Max:" << maximo<< "," << " Mim:" << minimo;
 
return 0;

}
