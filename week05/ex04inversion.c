#include<stdio.h>

int main(void){

  int total, p1,p2,p3,average=0,value,sum=0;

  printf("please, input the total: ");
  scanf("%d", &total);

  printf("please, input the value to person 1: ");
  scanf("%d", &p1);

  
  printf("please, input the value to person 2: ");
  scanf("%d", &p2);

  
  printf("please, input the value to person 3: ");
  scanf("%d", &p3);

  sum = p1+p2+p3;

  if(sum>total || sum<total){//verifica que los datos coincidad
    printf("Los suma de los valores no corresponden a la inversión total\n");
  }else{

    value = total/p1;
    average = 100/value;

    printf("la primera persona invirtio %d\%\n",average);
    
    value = total/p2;
    average = 100/value;

    printf("la segunda persona invirtio %d\%\n",average);
    
    value = total/p3;
    average = 100/value;

    printf("la tercera persona invirtio %d\%\n",average);

    printf("Total invertido es: %d\n",total);
  }
  return 0;
}
