#include<stdio.h>

int main() {
  int terms,first=0,second=1,next,i=0;
printf("Enter the number of terms upto which you want Fibonacci Series -: ");
scanf("%d",&terms);
if(terms == 1){
printf("%d\n",first);
}
if(terms == 2){
  printf("%d\n",first);
  printf("%d\n",second);
}
if(terms > 2){
printf("%d\n",first);
printf("%d\n",second);
for(i=0;i<terms-2;i++){
next = first+second;
printf("%d\n",next);
first = second;
second=next;
}
}
  return 0;
}
