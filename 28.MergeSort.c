minal#include<stdio.h>

void mergeSort(int a[], int length){
  
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

  mergeSort(a,size);


  return 0;
}
