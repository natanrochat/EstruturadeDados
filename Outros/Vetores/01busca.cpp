#include <iostream>

using namespace std;

int main(){
    
    int n, i, x;
    int cont = 0;
    
    // Escolher o tamanho do vetor.
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vetA[n];

    for(i=0; i<n; i++){ // Laço para adicionar elementos ao vetor "vetA".
        cout << "Digite o " << i+1 << "º " << "número para o vetor: ";
        cin >> vetA[i];
    }

    // Elemento para a busca sequencial.
    cout << "Digite o elemento para a busca sequencial: ";
    cin >> x;

    do{  // Laço que irá percorrer todo o vetor e analisar cada posição.

        if(vetA[cont] != x){ // Se o elemento para a busca for diferente ao elemento com o índice "cont".
            cout << x << " NÃO PERTENCE ao " << cont+1 << "º" << " elemento do vetor!" << endl;
        }
        else{ // Se o elemento para a busca for igual ao elemento com o índice "cont".
            cout << x << " PERTENCE ao " << cont+1 << "º" << " elemento do vetor!" << endl;
        }

        cont++; // Incrementa a contagem/variável "cont".

    }while(n > cont); // Enquanto o tamanho do vetor for maior que a contagem, faça.

    return 0;
}
