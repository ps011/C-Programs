#include<stdio.h>

int main(){

FILE *fp;
char c;
fp = fopen("file1.txt", "r");

if(fp ==NULL){
  printf("File Does not exist");
}
else{
while(c != EOF){
c=getc(fp);
printf("%c",c);
}
printf("\n");
}

  return 0;
}
