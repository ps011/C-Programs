#include<stdio.h>
int main(){
unsigned int num1,num2;
printf("Enter Number 1 -: ");
scanf("%d",&num1);
printf("Enter Number 2 -: ");
scanf("%d",&num2);
num1 = num1+num2;
num2 = num1-num2;
num1 = num1-num2;
printf("%d and %d\n",num1,num2);
return 0;

}
