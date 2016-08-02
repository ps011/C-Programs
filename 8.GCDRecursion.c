#include<stdio.h>

int findMin(int num1,int num2){
  if(num1<=num2)
  return num1;
  else
  return num2;
}

int greatestCommonDivisor(int num1,int num2,int divisor){
  if(divisor>0){
      if(num1%divisor==0 && num2%divisor==0){
            return divisor;
      }
      else{
        return greatestCommonDivisor(num1,num2,divisor-1);
    }
}
else{
  return 1;
}
}

int main(){
  int num1,num2,divisors,result;
printf("Enter Number 1 -: \t");
scanf("%d",&num1);
printf("Enter Number 2 -: \t");
scanf("%d",&num2);
divisors = findMin(num1,num2);
result =greatestCommonDivisor(num1,num2,divisors);
printf("%d\n",result);
return 0;
}
