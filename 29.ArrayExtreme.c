#include<stdio.h>

int findMax(int a[], int length){
int i=0, max=a[0];
for(i=0;i<length-1;i++){
if(max<a[i+1]){
  max = a[i+1];
}
}
return max;
}

int findMin(int a[], int length){
  int j=0, min=a[0];
  for(j=0;j<length-1;j++){
  if(min>a[j+1]){
    min = a[j+1];
  }
  }
  return min;

}


int main(){
  int n,i, a[10];

  printf("Enter size of Array -: \n");
  scanf("%d\n", &n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("The minimum and maximum values are = %d and %d\n", findMin(a,n),findMax(a,n));



  return 0;
}
