#include<stdio.h>

void insertionSort(int a[],int length){

int min=a[0],i,j,temp,current;

for( i=0;i<length-1;i++){
  current = a[i];
    for(j=i+1;j>0;j--){
    //  printf("J=%d and J-1 = %d\n",j,j-1);
  //    printf("a[j] = %d and a[j-1] = %d\n",a[j],a[j-1]);
      if(a[j]<a[j-1]){
      temp = a[j];
      a[j] = a[j-1];
      a[j-1] = temp;
  //    printf("Swapped\n" );
}
current--;
      }

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

  insertionSort(a,size);

  return 0;
}
