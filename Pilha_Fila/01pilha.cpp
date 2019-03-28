#include <iostream>
#define MAXTAM 100

using namespace std;

struct Pilha{

	int lista[MAXTAM];
	int topo; // Índice do vetor da pilha
	int max; // Índice máximo do vetor da pilha
};

void pilhaInit(Pilha &pil, int mx){

	pil.topo = -1;
	pil.max = mx;
}

bool pilhaVazia(Pilha &pil){
	if(pil.topo == -1){
		return true; // true para pilha vazia
	}
	else{
		return false; // false para pilha não-vazia
	}
}

bool pilhaCheia(Pilha &pil){
	if( pil.topo == (pil.max - 1) ){
		return true; // true para pilha cheia
	}
	else{
		return false; // false para pilha não-cheia
	}
}

void pilhaPush(Pilha &pil, int num){
	if(pilhaCheia(pil)){
		cout << "\nOverflow, a pilha está cheia!" << endl;
	}
	else{
		pil.topo++; // pós-incrementa o valor do topo da pilha
		pil.lista[pil.topo] = num;
	}
}

int pilhaPop(Pilha &pil){

	int ret; // variável auxiliar para o return

	if(pilhaVazia(pil)){
		cout << "\nUnderflow, a pilha está vazia!" << endl;
	}
	else{
		ret = pil.lista[pil.topo];
		pil.topo--; // pós-decrementa o valor do topo da pilha
		return ret; // retorna o valor que foi 'desempilhado'
	}
}

void transfere(Pilha &a1, Pilha &a2, Pilha &a3){

	int dado;

	while(pilhaVazia(a1) == false){

		dado = pilhaPop(a1);

		if( (dado%2) == 0 ){
			pilhaPush(a2, dado);
		}
		else{
			pilhaPush(a3, dado);
		}
	}

	while(pilhaVazia(a3) == false){

		dado = pilhaPop(a3);
		pilhaPush(a1, dado);
	}
}

void transfereSimples(Pilha &a1, Pilha &a2, int valMax){ /// tirar

	int dado;

	for(int s=0; s < valMax; s++){
		dado = pilhaPop(a1);
		if( (dado%2) == 0 ){
			pilhaPush(a2, dado);
		}
		else{
			pilhaPush(a1, dado);
		}
	}
}

int main(){

	// Declaração das Variáveis
	Pilha p1, p2, p3;
	int maxVal;

	// Escolher o valor máximo (quantidade de elementos) das pilhas
	cout << "Digite o valor Máximo das 3 Pilhas: ";
	cin >> maxVal;

	// Inicializa as Pilhas
	pilhaInit(p1 ,maxVal);
	pilhaInit(p2 ,maxVal);
	pilhaInit(p3 ,maxVal);

	// Definir um vetor de alimentação
	int vet[maxVal];

	// Alimentação da Pilha 'p1'
	for(int i=0; i<maxVal; i++){
		cout << i+1 << "º " << "valor: ";
		cin >> vet[i];
		pilhaPush(p1, vet[i]);
	}

	// Função para transferência dos valores pares e ímpares
	transfere(p1, p2, p3);

	cout << endl;

	// Mostrar valores da pilha 'p1' (Ímpares)
	cout << "- Pilha P1 (Ímpares) -" << endl;
	for(int j=0; j <= p1.topo; j++){
		cout << p1.lista[j] << " ";
	}

	cout << endl;

	// Mostrar valores da pilha 'p2' (Pares)
	cout << "- Pilha P2 (Pares) -" << endl;
	for(int k=0; k <= p2.topo; k++){
		cout << p2.lista[k] << " ";
	}

	cout << endl;

	return 0;
}