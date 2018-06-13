/*
 *  Compilando e executando o exemplo da aula 11 - ponteiros e vetores.
 * Algumas alterações feitas.
 *  Created on: 11 de jun de 2018
 *      Author: Marina
 */

#include<stdio.h>

int main(){
	
	int lista[100];
	int i, n;
	
	printf("Digite o número de elementos (no máximo 100): ");
	scanf("%d", &n);
	
	if(n>100){
		printf("n não pode ser maior que 100! So lerei os 100 primeiros números.\n");
		n = 100;
	}
	
	printf("Digite a seguir os %d elementos: \n", n);
	
	/*leitura dos elementos*/
	for (i=0; i<n; i++){
		scanf("%d", &lista[i]);
	}
	
	/* Impressão dos elementos, na ordem inversa */
	for (i-1; i>=0; i--){
		printf("%d", lista[i]);
		printf("\n");
	}
	
	return 0;
}
