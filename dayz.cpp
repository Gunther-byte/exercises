#include<stdio.h>

int main(){
	//Declaración de variables 
	int dias;
	float resultado;
	
	//instrucciones para el usuario
    printf ("Ingresa un número de dias para calcular los segundos que tiene:")
	//Lectura de variables
	scanf("%d", &dias);
	
	resultado = dias * (24*60*60);
	printf ("\tEn %d dias hay %0.2f segundos.\n", dias, resultado);
	return 0;
}
