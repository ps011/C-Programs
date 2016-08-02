#include<stdio.h>

int length(char *str){
int i=0;
while(str[i]!='\0'){
  i++;
}
return i-1;
}

void reverse(char *str){
int j=length(str),i=0;
while(j>i){
char temp = str[j];
str[j]=str[i];
str[i]=temp;
j--;
i++;
}
printf("Name is %s\n",str);
}

int main(){
char *name;
printf("Enter Your Name -: ");
scanf("%s\n",name );
reverse(name);
return 0;
}
