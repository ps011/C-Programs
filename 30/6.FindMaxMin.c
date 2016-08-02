#include<stdio.h>

int findMax(int a[],int length){
int max = a[0],i=0;
for(i=0;i<length;i++){
  if(a[i]>max){
    max = a[i];
  }
  else{
  //  max = a[i+1];
  }
}
return max;
}

int findMin(int a[],int length){
int min = a[0],i=0;
for(i=0;i<length;i++){
  if(a[i]<min){
    min = a[i];
  }
  else{
  //  min = a[i+1];
  }
}
return min;
}

int main(){
int a[20],length,i;
printf("Enter size of array -: ");
scanf("%d",&length);
for(i=0;i<length;i++){
scanf("%d",&a[i]);
}
printf("Max is -: %d\n", findMax(a,length));
printf("Min is -: %d\n", findMin(a,length));

return 0;
}
