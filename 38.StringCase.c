#include<stdio.h>

int main(){

char word[50];
int i=0;

printf("Enter String -: ");
gets(word);

while(word[i] != '\0'){
  if(word[i] > 96 && word[i] < 123){
    word[i] = word[i]-32;
    i++;
  }
  else{
    word[i] = word[i]+32;
    i++;
  }
}
puts(word);
return 0;
}
