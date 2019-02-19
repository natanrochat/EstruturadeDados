/*
* Sejam dados o conjunto A de números inteiros e o número inteiro x.
* Elabore um programa que verifique se o número x existe no conjunto A.
* Se o número x existir, informe que o número foi encontrado, senão,
* informe que o número não foi encontrado.
*
* Passos para resolução em JavaScript:
* 1. Realizar uma entrada para saber quantos numeros o usuário
* quer no conjunto A.
* 2. Usar o laço "for" para preencher o vetor de variáveis (conj. A)
* com números escolhidos pelo usuário (entrada).
* 3. Realizar uma entrada para saber qual número o usuário quer verificar
* se existe no Conjunto A.
* 4. Usar "if...else" para verificar se o número foi encontrado.
*/

function mostraConj() {
	document.write("Conjunto A = [ " + conjA + " ]");
}
//função para mostrar os números do conjunto A.

var n = prompt("Digite o tamanho do conjunto"); 
//decidir quantas vezes o laço "for" irá fazer o loop.

var conjA = []; 
//inicialização do vetor do conjunto.

for(var i = 0; i<n; i++){
	var y = prompt("Digite um número para o conjunto");
	conjA.push(y);
}
//loop para armazenar os números que o usuário quer no vetor "conjA".

var x = prompt("Qual variável deseja verificar?"); 
//variável para verificação.

if(conjA.indexOf(x) != -1){
	alert("Número foi encontrado!");
	document.write("Número "+x+" pertence ao conjunto A!<br>");
	mostraConj();
}else{
	alert("Número NÃO foi encontrado!");
	document.write("Número "+x+" NÃO pertence ao conjunto A!<br>");
	mostraConj();
}

/* 
* Se o x pertencer ao conjA, irá retornar True,
* if...else para verificar se no conjunto A (vetor conjA), pertence o número x digitado pelo usuário
* caso retorne falso, a condição do if, virá para o else.
*/

/* EXPLICANDO FUNÇÃO .indexOf(valor_para_procurar, início);
*	Basicamente, essa função serve para verificar se um elemente existe dentro de um array ou de uma string.
*	Em melhores palavras, essa função retorna um NÚMERO, representando a posição que um valor especificado ocorreu
*	pela primeira vez. Caso ele nunca ocorra, será retornado o número -1. Esse "início" no argumento, serve para você
*	dizer qual posição você quer que comece, se você não passar nada, irá começar da posição zero, padrão.
	Ou seja, se conjA.indexOf(x) != -1, se for verdadeiro, logo existe um número que representa a posição do valor específico
	caso não exista, a função retornará -1, então esse número não pertence ao Conjunto A.
*/