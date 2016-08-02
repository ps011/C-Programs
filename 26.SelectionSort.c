#include<stdio.h>

void swap(int a,int b){
  a=a+b;
  b=a-b;
  a=a-b;
}

void selectionSort(int a[], int length){
int min,i,j;
for(i=0;i<length;i++){
  min = i;
  for(j=i+1;j<length;j++){
    if(a[min]>a[j]){
      min=j;
    }
  }
int temp = a[min];
a[min] = a[i];
a[i] = temp;
}
printf("Sorted Array -: \n");
for(i=0;i<length;i++)
printf("%d\n",a[i]);
}



int main(){

  int a[20],i,size;

  printf("Enter size of Array -: ");
  scanf("%d", &size);

  for(i=0;i<size;i++)
  scanf("%d",&a[i]);

  selectionSort(a,size);






  return 0;
}
