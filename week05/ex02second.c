/*
It was created by Eduardo Flores
*/

#include<stdio.h>

int main(void){

  int seg= 0,hr,min,sg;
//variable seg es la que guardará los segundos ingresados
  printf("Please, input your seconds: ");
  scanf("%d", &seg);
  hr = (seg/3600);
  min = (seg -(hr*3600))/60;
  sg = seg -(hr*3600+min*60);

//estos if solo anexan un "O" antes del numero en caso que estos sean menor a 10 para dar un formato así: 01:01:01

  if(hr <10){
    printf("0%d:",hr);
  }else{
    printf("%d:",hr);
  }
  if(min<10){
    printf("0%d:",min);
  }else{
    printf("%d:",min);
  }
  if(sg<10){
    printf("0%d:",sg);
  }else{
    printf("%d\n",sg);
  }
  return 0;
}