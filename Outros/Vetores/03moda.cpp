#include <iostream>

using namespace std;

int main(){

	int n, i, j, k, moda;
	int verf = 0;

	cout << "Digite o tamanho do conjunto: ";
    cin >> n;

	int conjM[n];

	for(i=0; i<n; i++){ // Laço para adicionar elementos ao vetor "conjM".
        cout << "Digite o " << i+1 << "º " << "número para o conjunto: ";
        cin >> conjM[i];
    }

	for(j = 0; j < n; j++){ // Laço para testar qual número é a moda.

		for(k = j + 1;k < n;k++){ // Explicação ao final do código.

			if(conjM[j] == conjM[k]){ // Se algum valor for igual (Reincidir), a moda será o valor.
				moda = conjM[k];
				verf++;
			}

		}

	}

	if(verf > 0){
		cout << "A Moda do conjunto é o número: " << moda << "!" << endl;
	}
	else{
		cout << "O Conjunto NÃO possui moda!" << endl;
	}

	return 0;
}

	/*
		Para cada valor de "j", o laço for aninhado irá testar TODOS os valores de "k",
		ou seja, qndo "j" for zero, o "k" vai passar a ter todos os indices do vetor e
		irá testar, se algum valor em que o "j" é índice for igual ao valor em que o "k"
		é o índice, então vai rolar a moda...

		ex: conjM[0] = 4 // Quatro aqui
			conjM[1] = 5
			conjM[2] = 1
			conjM[3] = 0
			conjM[4] = 4 // Quatro aqui também
			conjM[5] = 82
		
		OBS: NÃO FAZER k=j porque o valor seria igual sempre... conjM[0] é igual a conjM[0].
			 Por isso coloque o "k" sendo sempre o "j+1"

		 - PRIMEIRO LAÇO COM "J" VALENDO ZERO! -

			conjM[0] == conjM[1]
			conjM[0] == conjM[2]
			conjM[0] == conjM[3]
			conjM[0] == conjM[4] <-- AQUI O VALOR DE conjM[0] SERIA REALMENTE IGUAL AO conjM[4], LOGO 4 POR ENQUANTO SERIA MODA!!
			conjM[0] == conjM[5]
			conjM[0] == conjM[6]
	*/
