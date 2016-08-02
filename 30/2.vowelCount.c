#include<stdio.h>
#include<string.h>
int countVowel(char *c){
  int length = strlen(c),i=0,count=0;

  for(i=0;i<erlength;i++){
    switch(c[i]){
      case 'a' : {count++; break;}
      case 'A' : {count++; break;}
      case 'e' : {count++; break;}
      case 'E' : {count++; break;}
      case 'i' : {count++; break;}
      case 'I' : {count++; break;}
      case 'o' : {count++; break;}
      case 'O' : {count++; break;}
      case 'u' : {count++; break;}
      case 'U' : {count++; break;}
      default : {}
    }
  }
  return count;
}
int main(){
  char c[20];
  printf("Enter String -: \n");
  gets(c);
  printf("Vowel Frequency -:%d\n",countVowel(c));
  return 0;
}
