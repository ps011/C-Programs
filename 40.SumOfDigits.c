#include<stdio.h>

int findSum(int number){

int sum=0,rem=0;

while(number>0){
  rem=number%10;
  sum = sum+rem;
  number = number/10;
}
return sum;
}

int main(){
int number=0;
printf("Enter Number-: ");
scanf("%d",&number);
printf("Sum is -: %d\n",findSum(number));
  return 0;
}
