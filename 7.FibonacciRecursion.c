#include<stdio.h>
int fibonacci(int n){
  if(n==1 || n==0){
    return n;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
int main(){
int number,i=0;
printf("Enter the number of terms -: ");
scanf("%d",&number);
while(i<number){
  printf("%d\t",fibonacci(i));
  i++;
}
return 0;
}
//These comments are to be removed.
