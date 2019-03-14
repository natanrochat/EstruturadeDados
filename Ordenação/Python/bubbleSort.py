def bubble(vt): # Função do BubbleSort, de parametro recebe um vetor.

	for i in range(0,len(vt)): # Para i no alcance de 0 até o tamanho do vetor.

		for j in range(i+1, len(vt)): # Para j no alcance de i+1 (n precisa analisar ele mesmo, caso j=0) até o tamanho do vetor.

			if(vt[i]>vt[j]): # Se o valor do vet na posição anterior for maior que o vet sucessor, troca!

				# Trocas de Valores.
				aux = vt[i]
				vt[i] = vt[j]
				vt[j] = aux

vet = [] # Inicializa a Lista/Vetor.
n = int(input("Digite o Tamanho do Vetor: ")) # "Restringe" o Tamanho de elementos.

for t in range(0,n): # Para t no alcance de 0 até o número inserido pelo user em "n".
	val = int(input("Digite o {}º elemento: ".format(t+1))) # Pega do usuario o valor pra add no vetor
	vet.append(val) # Adiciona o valor digitado no vetor

print("Vetor antes do BubbleSort: {}".format(vet))

bubble(vet) # Faz o BubbleSort

print("Vetor depois do BubbleSort: {}".format(vet))