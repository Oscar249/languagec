#include<stdio.h>

int main(void){

  int seg= 0,hr,min,sg;
//test.
  printf("Please, input your seconds: ");
  scanf("%d", &seg);
  hr = (seg/3600);
  min = (seg -(hr*3600))/60;
  sg = seg -(hr*3600+min*60);

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