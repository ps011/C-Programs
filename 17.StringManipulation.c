#include<stdio.h>
#include<string.h>

void insertSubstring(char *string){
  int position,length,i,j;
  char substring[strlen(string)],temp[20];
  printf("Enter Substring -: ");
  scanf("%s",substring);
  printf("Enter Position -: ");
  scanf("%d",&position);
length = strlen(substring);
for(i=position,j=0;i<strlen(string);i++,j++)
{
  temp[j] = string[i];
}
for(j=position,i=0;i<strlen(substring);j++,i++){
  string[j]=substring[i];
}
for(i=position+strlen(substring),j=0;j<strlen(temp);j++,i++){
  string[i]=temp[j];
}
printf("%s\n",string);
}


void deleteCharacters(char *string){
  char temp[strlen(string)];
  int position, numCharacters,i,j;
  printf("Enter Position -: ");
  scanf("%d",&position);
  printf("Enter Number of Characters to be Removed -: ");
  scanf("%d",&numCharacters);
for(i=position+numCharacters,j=0;i<strlen(string);j++,i++){
temp[j]=string[i];
}
for(i=position,j=0;j<strlen(temp);j++,i++){
  string[i]=temp[j];
}
for(i=0,j=0;i<strlen(string)-numCharacters-1;i++,j++){
  temp[j]=string[i];
}
printf("%s\n",temp);

}

void replaceCharacter(char *string){
  char character;
   int position;
   printf("Enter Position -: ");
   scanf("%d",&position);
   printf("Enter Character to be Replaced -: ");
   fflush(stdin);
   scanf(" %c",&character);
   string[position]=character;
   printf("%s\n",string);
}

int main(){
  char *input;
printf("Enter String -: ");
scanf("%s",input);
//insertSubstring(input);
// deleteCharacters(input);
fflush(stdin);
replaceCharacter(input);
return 0;
}
