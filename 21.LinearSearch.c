#include<stdio.h>
int flag=0;
int main(){

int n,i, a[10],l;

printf("Enter size of Array -: \n");

scanf("%d\n", &n);

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter element to be searched -: \n" );
scanf("%d",&l);

for(i=0;i<n;i++){
if(a[i] == l){
flag = flag+1;
  printf("Element found at position %d\n",i+1);
}
}
if(flag==0){
printf("Element not found");
}
return 0;
}
