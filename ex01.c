/*
 *  Compilando e executando o exemplo da aula 11 - ponteiros e vetores.
 * Algumas altera��es feitas.
 *  Created on: 11 de jun de 2018
 *      Author: Marina
 */

#include<stdio.h>

int main(){
	
	int lista[100];
	int i, n;
	
	printf("Digite o n�mero de elementos (no m�ximo 100): ");
	scanf("%d", &n);
	
	if(n>100){
		printf("n n�o pode ser maior que 100! So lerei os 100 primeiros n�meros.\n");
		n = 100;
	}
	
	printf("Digite a seguir os %d elementos: \n", n);
	
	/*leitura dos elementos*/
	for (i=0; i<n; i++){
		scanf("%d", &lista[i]);
	}
	
	/* Impress�o dos elementos, na ordem inversa */
	for (i-1; i>=0; i--){
		printf("%d", lista[i]);
		printf("\n");
	}
	
	return 0;
}
