/*
Author: Eduardo Flores
*/

#include<stdio.h>

int main(void){

	int year = 0;

	printf("Please enter your year, example 1956: ");
	scanf("%d",&year);

	//Los años biciestos deben de ser divisibles entre 100 y 400, si una de estas dos condiciones
	//No se cumplen entonces el año no es biciesto.

	if (year % 100 == 0 && year % 400 == 0)//condición en base al residuo de la división.
	{
		printf("Tu año de nacimiento es biciesto\n");
	}else{
		printf("El año en que naciste no es biciesto\n");
	}


	return 0;
}