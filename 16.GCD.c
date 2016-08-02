#include<stdio.h>
int findMin(int num1,int num2){
  if(num1<=num2)
  return num1;
  else
  return num2;
}

int main(){
int num1,num2,divisor;

printf("Enter Number 1 -: ");
scanf("%d",&num1);
printf("Enter Number 2 -: ");
scanf("%d",&num2);
divisor = findMin(num1,num2)/2;
while(divisor>0){
  if(num1%divisor == 0 && num2%divisor==0){
    printf("Greatest Common Divisor is -: %d\n",divisor);
    break;
  }
  divisor--;

}


}
