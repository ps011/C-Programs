#include<stdio.h>

int main(){

FILE *fp1, *fp2;
char c;

fp1 = fopen("file1.txt", "r");
fp2 = fopen("file2.txt", "w");

if(fp1==NULL){
  printf("Source Does not Exist");
}
else if(fp2 == NULL){
printf("Destination Does not Exist");
}
else{
while(c != EOF){
  c= getc(fp1);
  putc(c,fp2);
}

}
return 0;

}
