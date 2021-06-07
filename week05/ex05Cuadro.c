/*
autor: Eduardo Flores
*/

#include<stdio.h>
#include<strings.h>

int main(void){

	int size=0;
  int ct = 0,ct2=0;
  int time = 0;

	printf("* * * *\n");
	printf("*     *\n");
	printf("*     *\n");
	printf("* * * *\n");



	//Versión mejorada

	printf("please, enter one number: ");//ask for one size
	scanf("%d", &size);

	char ast[] = "*";
  time = size;//asignación a veces que imprimira lineas
  while(ct != time){
    while(ct2 != size){
      printf("%s ",ast);
      ct2++;//incrementador de contador
    }
    printf("\n");//salto de linea
    ct2 = 0;//reset to ct
    ct++;
  }

	return 0;
}