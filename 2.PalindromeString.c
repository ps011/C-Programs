#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int length(char *str){
int i=0;
while(str[i]!='\0'){
  i++;
}
return i-1;
}

char* reverse(char *str){
int j=length(str),i=0;
while(j>i){
char temp = str[j];
str[j]=str[i];
str[i]=temp;
j--;
i++;
}
return str;
//printf("Name is %s\n",str);
}

int main(){
char *name,*revName;
int i=0;
printf("Enter Your Name -: ");
scanf("%s",name );
revName=(char*)calloc(length(name), sizeof(char));
strcpy(revName,name);
reverse(name);
// printf("%s\n",revName );
// printf("%s\n",name );
while(revName[i]!='\0'){
if(name[i] != revName[i]){
  printf("String Not Palindrome");
  exit(0);
}
i++;
}

  printf("String is Palindrome\n");


return 0;
}
