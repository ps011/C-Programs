#include<stdio.h>
int main(){
int i,j,k,row;
printf("Enter the number of ROWS -: ");
scanf("%d",&row );
for(i=1;i<=row;i++){
    for(j=1;j<=row-i;j++){
        printf(" ");
    }
        for(k=1;k<=i;k++){
            printf("* ");

        }
        printf("\n");
}
  return 0;
}
