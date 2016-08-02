#include<stdio.h>
#include<string.h>
int asciiSum(char *c){
int length = strlen(c),i,sum;
for(i=0;i<length;i++){
  sum = sum+(int)c[i];
}
  return sum;
}

int main(){
char c[100],sum;
printf("Enter String -: ");
gets(c);
printf("%d",asciiSum(c));
return 0;
}
