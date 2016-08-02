#include<stdio.h>
int factorial(int number){
  if(number >=1){
   return number * factorial(number -1);
 }
 else{
   return 1;
 }
}
int main(){
int term,factorialValue;
printf("Enter the Number to Find Factorial -: ");
scanf("%d",&term);
if(term ==0){
factorialValue =1;
}
else{
factorialValue = factorial(term);}
printf("The Value of Factorial is-: %d\n",factorialValue);
return 0;
}
