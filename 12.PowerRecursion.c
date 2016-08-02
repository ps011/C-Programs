#include<stdio.h>
int result=1;
int power(int base, int exponent){
if(exponent ==0){
  return 1;
}
if(exponent>=1)
{
  result = result * base;
return power(base,exponent-1);
}
else{
  return result;
}
}

int main(){
int base,exponent,answer;
printf("Enter  Base -: ");
scanf("%d",&base );
printf("Enter Exponent -: ");
scanf("%d",&exponent );
  answer = power(base,exponent);
  printf("%d\n",answer);
  return 0;
}
