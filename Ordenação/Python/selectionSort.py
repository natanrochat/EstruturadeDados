def selection(vt): # Função do SelectionSort, de parametro recebe um vetor.

	for i in range(0,len(vt)): # Para i no alcance de 0 até o tamanho do vetor.

		posMen = i # Define a posição do 'menor valor' sendo o valor de "i" posição inicial.
		valMen = vt[i] # Define o valor do 'menor valor' sendo o valor de "i" posição inicial.

		for j in range(i+1,len(vt)): # Para j no alcance de i+1 (n precisa analisar ele mesmo, caso j=0) até o tamanho do vetor.
			
			if(valMen > vt[j]): # Se o valor da posição "i" for maior que o valor do vet na pos "j".
				posMen = j # Troca "posMen" para a posição do novo 'menor valor'.
				valMen = vt[j] # Troca "valMen" para o valor do novo 'menor valor'.
			
		# Faz a troca dos valores pela seleção.
		aux = vt[i]
		vt[i] = vet[posMen]
		vet[posMen] = aux

vet = [] # Inicializa a Lista/Vetor.
n = int(input("Digite o Tamanho do Vetor: ")) # "Restringe" o Tamanho de elementos.

for t in range(0,n): # Para t no alcance de 0 até o número inserido pelo user em "n".
	val = int(input("Digite o {}º elemento: ".format(t+1))) # Pega do usuario o valor pra add no vetor
	vet.append(val) # Adiciona o valor digitado no vetor

print("Vetor antes do SelectionSort: {}".format(vet))

selection(vet) # Faz o SelectionSort

print("Vetor depois do SelectionSort: {}".format(vet))