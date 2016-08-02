#include<stdio.h>

int getMin(int a,int b){
  if(a>=b)
  return a;
  else
  return b;
}

int strLength(char *c){
  int i=0;
  while(c[i] != '\0'){
    i++;
  }
  return i;
}

int stringCompare(char *c1, char *c2){
int l1 = strLength(c1), l2 = strLength(c2),i,j,count=0;
for(i=0;i<l1;i++){
  for(j=0;j<l2;j++){
    if(c1[i]==c2[j]){
      count++;
      break;
    }
  }
}
if(count>= getMin(l1,l2)){
  return 1;
}
else{
  return 0;
}
}

int main(){
char c1[20],c2[20];

gets(c1);
gets(c2);
if(stringCompare(c1,c2)==1){
  printf("Strings Match\n");
}
else{
  printf("Strings DO NOT Match\n");
}

}
