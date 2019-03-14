#include <iostream>

using namespace std;

int main(){

	int n, j, c, aux, aux2;

	cout << "Digite o Tamanho do vetor: ";
	cin >> n; // Pega do usuário um vetor de tamanho n.

	int vet[n]; // Inicializa o vetor com tamanho n.

	for(int z=0; z<n; z++){ // Alimentar o vetor com valores que o user digitar.
		cout << "Digite o " << z+1 << "º " << "valor do vetor: ";
		cin >> vet[z];
	}

	cout << "Antes do InserisonSort: " << endl;
	for(int a=0; a<n; a++){ // Mostrar vetor antes do InsertionSort
		cout << vet[a] << " ";
	}

	cout << endl;

	for(int i=1; i<n; i++){ // Início do InsertionSort Crescente

		j = i-1;
		aux = vet[i];

		while(j >= 0 && aux < vet[j]){

			vet[j+1] = vet[j];
			j--;
		}

		vet[j+1] = aux;

	}

	cout << "Depois do InserisonSort Crescente: " << endl;
	for(int dc=0; dc<n; dc++){ // Mostrar vetor depois do InsertionSort Crescente
		cout << vet[dc] << " ";
	}

	cout << endl;


	for(int l=1; l<n; l++){ // Início do InsertionSort Decrescente

		c = l-1;
		aux2 = vet[l];

		while(c >= 0 && aux2 > vet[c]){
			
			vet[c+1] = vet[c];
			c--;

		}

		vet[c+1] = aux2;

	}

	cout << "Depois do InserisonSort Decrescente: " << endl;
	for(int dd=0; dd<n; dd++){ // Mostrar vetor depois do InsertionSort Crescente
		cout << vet[dd] << " ";
	}

	cout << endl;

	return 0;

}