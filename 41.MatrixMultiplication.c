#include<stdio.h>
#include<stdlib.h>

int matrixMultiplication(int *a, int *b,int aR,int aC, int bR, int bC){
int *result,i=0,j=0;
result=(int*)calloc(aR*bC,sizeof(int));

for(i=0,j=0;i<=aR;i++){


}





  return *result;
}

int main(){
int aRow,aCol,bRow,bCol,**a,*b,i=0,j=0;

printf("Enter Rows and Columns of Matrix A -: ");
scanf("%d",&aRow);
scanf("%d",&aCol);

printf("Enter Rows and Columns of Matrix B -: ");
scanf("%d",&bRow);
scanf("%d",&bCol);

if(aCol != bRow){
  printf("Multiplication is Not Possible");
}
else{
a=(int**)calloc(aRow*aCol,sizeof(int));
b=(int*)calloc(bRow*bCol,sizeof(int));

while(i<=aRow){
  while(j<=aCol){
  scanf("%d",&a[i][j]);
  j++;
  }
  i++;
}
i=0;
// while(i<bRow*bCol){
//   scanf("%d",&b[i]);
//   i++;
// }
//i=0;
printf("===============================\n");
while(i<aRow){
    while(j<aCol){
  printf("%d\t",a[i][j]);
  j++;
  }
  printf("\n");
  i++;
}










}

  return 0;
}
