#include<stdio.h>
int inc=0;
int checkPrime(int number){
  int i=0;
  if(number>=3){
    for(i=2;i<(number);i++){
      if(number%i == 0){

        inc++;
      }
    }
  }
  if(inc){
    return 0;
  }
  else{
    return 1;
  }
}
int main(){
  int num;
  printf("Enter Number -: ");
  scanf("%d",&num);
  if(num == 1){
    printf("Special Number\n");
  }
  else if(checkPrime(num))
  {
    printf("Number is Prime\n");
  }
  else if(checkPrime(num) == 0){
    printf("Number is Not Prime\n");
  }
  return 0;
}
