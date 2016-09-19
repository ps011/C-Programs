#include<stdio.h>

int main(){

FILE *fp1,*fp2;
char c;

fp1 = fopen("30/file1.txt","r");
fp2 = fopen("file2.txt","w");
if(fp1 == NULL){
  printf("Source Does Not Exist\n" );
}
else if(fp2 == NULL){
  printf("Destination Does Not Exist\n" );
}

while(!feof(fp1)){

c= getc(fp1);
if(c!='.'){
  putc(c,fp2);
}
else{
  putc(c,fp2);
  putc('\n',fp2);
}

}

  return 0;
}
