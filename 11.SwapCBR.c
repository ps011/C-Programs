#include<stdio.h>

void swapCBR(int *num1, int *num2){
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
  printf("%d And %d",*num1,*num2);
}

int main(){

int num1,num2;

printf("Enter Number 1 -: ");
scanf("%d",&num1 );
printf("Enter Number 2 -: ");
scanf("%d",&num2 );
swapCBR(&num1,&num2);
  return 0;
}
