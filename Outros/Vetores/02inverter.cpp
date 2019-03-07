#include <iostream>

using namespace std;

int main(){

	// Variáveis
	int i, n, aux, k;
	int j = 0;

	cout << "Digite o tamanho do vetor: ";
    cin >> n;

	int vetS[n];

	int f = n-1; // Variável "f" para o último índice do vetor.

	for(i = 0; i < n; i++){ // Laço para adicionar elementos ao vetor "vetS".

        cout << "Digite o " << i+1 << "º " << "número para o vetor: ";
        cin >> vetS[i];
    }

	while(j < f){ // Laço para fazer a troca dos valores

		aux = vetS[f]; // Armazena na variavel "aux" o valor do "vetS" na posição "f".

		vetS[f] = vetS[j]; // Muda o valor do "vetS" na posição "f" para o valor do "vetS" na posição "j".

		vetS[j] = aux; /* Muda o valor do "vetS" na posilção "j" para o valor 
						da variável "aux" (Antigo valor do "vetS" na posição "f").*/
		
		j++; // incrementa o "j".
		f--; // decrementa o "f".
	}

	for(k = 0; k < n; k++){ // Laço para imprimir o novo "vetS" que sofreu a inversão.
		cout << vetS[k] << " ";
	}

	return 0;
}
