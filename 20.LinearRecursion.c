#include<stdio.h>
int i=0;
void linearSearch(int n, int *a, int len){
  if(i<=len){
  if(a[i] == n)
  {
    printf("Element found at %d position\n", i+1 );
  }
  else{
    i++;
    linearSearch(n,a,len);
  }
}else{
  printf("Element not found in array\n");
}
}

int main(){

int n,i, a[10],l;

printf("Enter size of Array -: \n");

scanf("%d\n", &n);

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter element to be searched -: \n" );
scanf("%d",&l);
linearSearch(l,a,n);
return 0;
}
