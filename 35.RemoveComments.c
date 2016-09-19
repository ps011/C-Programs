#include<stdio.h>

int main(){

FILE *fp;
char c;

fp = fopen("7.FibonacciRecursion.c","r+");

if(fp == NULL){
  printf("File Does Not Exist");
}
else{
while(c!=EOF)
c=getc(fp);
printf("%c\n",c );
  if( c== '/'){
    printf("%c\n",c );
    c=getc(fp);
    if(c=='/'){
      while(c != '\n'){
        c=getc(fp);
        putc(2,fp);
      }
    }
  }
}

  return 0;
}
