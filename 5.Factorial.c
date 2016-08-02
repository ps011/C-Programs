#include<stdio.h>
int main(){
int number;
unsigned long factorial=1;
printf("Enter Number to find Factorial -: ");
scanf("%d ",&number);
printf("%d",number);
if(number==0){
  factorial =1;
  printf("Factorial is -: %lu\n",factorial);
}
else{
while(number>0){
factorial = factorial * number;
number --;
}
printf("Factorial is -: %lu\n",factorial);
}
return 0;
}
