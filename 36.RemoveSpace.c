#include<stdio.h>
#include<string.h>

int main(){

FILE *fp1, *fp2;
char c[100]; int space=0,i=0,j=0;

fp1 = fopen("file1.txt", "r");
fp2 = fopen("file2.txt", "w");

if(fp1==NULL){
  printf("Source Does not Exist");
}
else if(fp2 == NULL){
printf("Destination Does not Exist");
}
else{
    fgets(c,100,fp1);
while(c[j] != '\0'){
  j++;
  printf("%d\n", j);
}
printf("%d\n", j);

for(i=0;i<j;i++){





  while(c[i]!=' '){
    putc(c[i],fp2);
    i++;
    printf("%d\n",i);
  }
  while(c[i] == ' '){
  i++;
  printf("Space %d\n",i);
  }
  i--;
  putc(' ',fp2);



}




//fputs(c,fp2);
fclose(fp1);
fclose(fp2);
}
return 0;

}
