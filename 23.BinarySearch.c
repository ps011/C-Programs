#include<stdio.h>
int found=0;
void binarySearch(int a[], int n, int length){
int min=0,max=length,middle=(min+max)/2;
while(min<=max){
  if(a[middle] == n){
    printf("Element Found at %d\n",middle+1);
    found++;
    break;
  }
  else if(a[middle]<n){
    min = middle+1;
    middle = (min+max)/2;
  }
  else if(a[middle]>n){
    max = middle-1;
    middle = (min+max)/2;
  }
}
if(found==0)
printf("List Exhausted, ELement not Found\n");
}

int main(){
int a[10],n,i,size;

printf("Enter Size of Array -: " );
scanf("%d",&size);

for(i=0;i<size;i++){
scanf("%d",&a[i]);
}

printf("Enter Element to be Searched -: " );
scanf("%d",&n );

binarySearch(a,n,size);


  return 0;
}
