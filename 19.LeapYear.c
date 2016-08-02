#include<stdio.h>
int main(){
  int year;
printf("Enter Year to be checked -: ");
scanf("%d",&year);

 if((year%4 == 0 && !year%100 ==0) || (year%400 == 0) ){
   printf("Its a Leap Year\n"); 
 }

 else{
   printf("Its not a Leap Year\n");
 }

  return 0;
}
