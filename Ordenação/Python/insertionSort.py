def insertion(vt): # Função do InsertionSort, de parametro recebe um vetor.

	for i in range(1, len(vt)): # Para i no alcance de 0 até o tamanho do vetor.
		aux = vt[i] # Armazena na variavel auxiliar o valor do elemento do vetor na pos "i".
		j = i-1 # Valor de "j" depende da variável "i" - 1, ou seja, 1 posição antes de "i".

		while((j >= 0) and aux < vt[j]): # Enquanto "j" for maior ou igual a zero e var "aux"
										 # for menor que o valor do vet na pos "j" faça.
			vt[j+1] = vt[j] # O vet na pos "j"+1 recebe o vet na pos "j"
			j -= 1 # decrementa o "j" pra tentar sair do loop.
		
		vt[j+1] = aux # Por fim, o vet "j"+1 recebe o valor da var aux, que era o vet pos "i".

vet = [] # Inicializa a Lista/Vetor.
n = int(input("Digite o Tamanho do Vetor: ")) # "Restringe" o Tamanho de elementos.

for t in range(0,n): # Para t no alcance de 0 até o número inserido pelo user em "n".
	val = int(input("Digite o {}º elemento: ".format(t+1))) # Pega do usuario o valor pra add no vetor
	vet.append(val) # Adiciona o valor digitado no vetor

print("Vetor antes do InsertionSort: {}".format(vet))

insertion(vet) # Faz o InsertionSort

print("Vetor depois do InsertionSort: {}".format(vet))