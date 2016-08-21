#include<stdio.h>

int main(){

FILE *fp;

fp = fopen("30/file1.txt","w");

fprintf(fp, "Here is the content of the file");
fclose(fp);

  return 0;
}
