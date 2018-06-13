/*
 *  Calcular equação de 2º grau (usando a fórmula de Bháskara) usando ponteiros.
 *  Created on: 12 de jun de 2018
 *      Author: Marina
 */

#include<stdio.h>
#include<math.h>


int positivo(float n){
	if (n > 0)
		return 1;
	else
		return 0;
}

int nulo(float n){
	if (n == 0)
		return 1;
	else
		return 0;
}

float delta(float a, float b, float c){
	return ( pow(b,2) - (4 * a * c) );
}

float raizes(float a,float b,float c,float *x1,float *x2) {
	
	if (positivo(delta(a, b, c) ) || nulo(delta(a, b, c) ) ) {
		*x1 = ( (-1)*b + sqrt(delta(a, b, c) ) ) / (2*a) ;
		*x2 = ( (-1)*b - sqrt(delta(a, b, c) ) ) / (2*a) ;
		printf("x1 = %.2f \nx2 = %.2f\n", *x1, *x2);
				
	} else {
		printf("%.2f + i.%.2f\n", (-1)*b / (2*a) , sqrt( (-1)*delta(a, b, c) )  / (2*a) );
		printf("%.2f - i.%.2f\n", (-1)*b / (2*a) , sqrt( (-1)*delta(a, b, c) )  / (2*a) );
				
		}
}


int main(){
	float a, b, c, *x1, *x2;
	int continuar;
	
	do {
		system("cls || clear");
		printf("Programa que calcula as raizes de uma equação de 2º grau: ax² + bx + c = 0\n");
		printf("Entre com os coeficientes a, b e c: \n");
		
		scanf("%f", &a);
		scanf("%f", &b);
		scanf("%f", &c);
		
		if (nulo(a))
			printf("'a' deve ser diferente de zero.");
		else {
			raizes(a, b, c, x1, x2);
		}
		
		printf("\n\nCalcular mais raizes?\n1 Continuar\n0. Sair\n");
		scanf("%d", &continuar);
			
	} while(continuar); 
	
}


