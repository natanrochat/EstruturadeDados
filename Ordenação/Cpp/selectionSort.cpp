#include <iostream>

using namespace std;

int main(){
	
	int posMen, valMen, aux, aux2, n;

	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	int vet[n];

	for(int k=0; k<n; k++){
		cout << "Digite o " << k+1 << "º" << " elemento: ";
		cin >> vet[k];
	}


	cout << "Array antes do SelectionSort: " << endl;

	for(int a=0; a<n; a++){ 
		cout << vet[a] << " ";
	}

	cout << endl;

	// --- Crescente ---


	for(int i=0; i<n; i++){

		posMen = i;
		valMen = vet[i];

		for(int j=i+1; j<n; j++){

			if(valMen > vet[j]){
				posMen = j;
				valMen = vet[j];
			}


		}

		aux = vet[i];
		vet[i] = vet[posMen];
		vet[posMen] = aux;

	}

	cout << "Array antes do SelectionSort Crescente: " << endl;

	for(int dc=0; dc<n; dc++){ 
		cout << vet[dc] << " ";
	}

	cout << endl;


	// --- Decrescente ---

	for(int l=0; l<n; l++){

		posMen = l;
		valMen = vet[l];

		for(int c=l+1; c<n; c++){

			if(valMen < vet[c]){
				posMen = c;
				valMen = vet[c];
			}


		}

		aux2 = vet[l];
		vet[l] = vet[posMen];
		vet[posMen] = aux2;

	}

	cout << "Array depois do SelectionSort Decrescente: " << endl;

	for(int dd=0; dd<n; dd++){ 
		cout << vet[dd] << " ";
	}

	cout << endl;

	return 0;
}