#include<stdio.h>

void binarySearch(int a[],int min,int max,int element){
  int middle = (min+max)/2;
if(min<=max){
  printf("%d and %d\n",min,max );
  if(a[middle] == element){
    printf("Element found at Position %d\n", middle+1);
  }
  else if(a[middle] < element){
    binarySearch(a,middle+1,max,element);
  }
  else if(a[middle] > element){
    binarySearch(a,min,middle-1,element);
  }
}
else{
  printf("Element not found\n");
}
}

int main(){
int a[20],i,element,size;

printf("Enter size");
scanf("%d", &size);
for(i=0;i<size;i++)
scanf("%d", &a[i]);

printf("Enter element to find -: ");
scanf("%d",&element);

binarySearch(a,0,size,element);

  return 0;
}
