#include<stdio.h>
int sum(int a){
  int sum=0,r=0;
  while(a>0){
    r=a%10;
    sum =sum+r;
    a=a/10;
  }
  return sum;
}

int main(){
int number;
unsigned long factorial=1;
printf("Enter Number to find Factorial -: ");
scanf("%d",&number);
//printf("%d",number);
if(number==0){
  factorial =1;
  printf("Factorial is -: %lu\n",factorial);
}
else{
while(number>0){
  //printf("%d\n",number);
factorial = factorial * number;
number --;
}
printf("Factorial is -: %lu\n",factorial);
printf("Factorial Sum is -: %d\n",sum(factorial));


}
return 0;
}
