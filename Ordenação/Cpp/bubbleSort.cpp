// Algoritmo para BubbleSort Crescente e Decrescente

#include <iostream>

using namespace std;

int main(){

	int n, aux, aux2;

	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	int vet[n];

	for(int k=0; k<n; k++){
		cout << "Digite o " << k+1 << "º " << "elemento: ";
		cin >> vet[k];
	}

	cout << "Antes do BubbleSort: " << endl;

	for(int a=0; a<n; a++){
		cout << vet[a] << " ";
	}

	cout << endl;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){

			if(vet[i] > vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}

		}
	}

	cout << "Depois do BubbleSort Crescente: " << endl;

	for(int dc=0; dc<n; dc++){
		cout << vet[dc] << " ";
	}

	cout << endl;


	for(int l=0; l<n; l++){
		for(int c=l+1; c<n; c++){

			if(vet[l] < vet[c]){
				aux2 = vet[l];
				vet[l] = vet[c];
				vet[c] = aux2;
			}

		}
	}

	cout << "Depois do BubbleSort Decrescente: " << endl;

	for(int dd=0; dd<n; dd++){
		cout << vet[dd] << " ";
	}

	cout << endl;

	return 0;
}
