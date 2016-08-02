#include<stdio.h>



void bubbleSort(int a[], int length){
int i=0;
while(length>0){
  for(i=0;i<length-1;i++){
    if(a[i]>a[i+1]){
      int temp = a[i];
      a[i] = a[i+1];
      a[i+1] = temp;
    }
  }
  length--;
}
}

int main(){
int a[20],i,size;

printf("Enter size of Array -: ");
scanf("%d", &size);

for(i=0;i<size;i++)
scanf("%d",&a[i]);

bubbleSort(a,size);

for(i=0;i<size;i++)
printf("%d\n",a[i]);

  return 0;
}
