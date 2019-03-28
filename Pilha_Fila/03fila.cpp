#include <iostream>
#define MAXTAM 10

using namespace std;

struct Fila{

	int lista[MAXTAM];
	int front; // Parte frontal da fila (novos elementos)
	int back; // Parte traseira da fila (velhos elementos)
	int tot; // Quantidade total de elementos na fila
	int max; // Máximo de elementos que pode ter na fila
};

void filaInit(Fila &fil){
	fil.back = 0;
	fil.front = 0;
	fil.tot = 0;
	fil.max = MAXTAM;
}

bool filaVazia(Fila &fil){
	if(fil.tot == 0){
		return true; // true para fila vazia
	}
	else{
		return false; // false para fila não-vazia
	}
}

bool filaCheia(Fila &fil){
	if(fil.tot == fil.max){
		return true; // true para fila cheia
	}
	else{
		return false; // false para fila não-cheia
	}
}

void filaPush(Fila &fil, int num){
	if(filaCheia(fil)){
		cout << "\nOverflow, a fila está cheia!" << endl;
	}
	else{
		fil.lista[fil.front] = num;
		fil.front = (fil.front + 1) % fil.max;
		fil.tot++;
	}
}

int filaPop(Fila &fil){

	int ret;

	if(filaVazia(fil)){
		cout << "\nOverflow, a fila está cheia!" << endl;
	}
	else{
		ret = fil.lista[fil.back]; // o primeiro elemento é o elemento mais antigo já adicionado
		fil.back = (fil.back + 1) % fil.max;
		fil.tot--;
		return ret;
	}
}

int transfere(Fila &a1, Fila &a2){

	int dado;

	for(int s=0; s < MAXTAM; s++){

		dado = filaPop(a1);

		if( (dado%2) == 0 ){
			filaPush(a2, dado);
		}
		else{
			filaPush(a1, dado);
		}
	}
}

int main(){

	// Declaração das Variáveis
	Fila f1, f2;

	// Inicializa as Filas
	filaInit(f1);
	filaInit(f2);

	// Definir um vetor de alimentação
	int vet[MAXTAM];

	// Alimentação da Fila 'f1'
	for(int i=0; i < MAXTAM; i++){
		cout << i+1 << "º " << "valor: ";
		cin >> vet[i];
		filaPush(f1, vet[i]);
	}

	// Função para transferência dos valores pares e ímpares
	transfere(f1, f2);

	cout << endl;

	// Mostrar valores da fila 'f1' (Ímpares)
	cout << "- Fila F1 (Ímpares) -" << endl;
	for(int j=0; j < f1.tot; j++){
		cout << f1.lista[j] << " ";
	}

	cout << endl;

	// Mostrar valores da fila 'f2' (Pares)
	cout << "- Fila F2 (Pares) -" << endl;
	for(int k=0; k < f2.tot; k++){
		cout << f2.lista[k] << " ";
	}

	cout << endl;
	
	return 0;
}