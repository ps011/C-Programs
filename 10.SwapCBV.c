#include<stdio.h>
void swap(int int1,int int2){
int1 = int1+int2;
int2 = int1-int2;
int1 = int1-int2;
printf("%d and %d\n", int1,int2);
}
int main(){
int num1,num2;
printf("Enter Number 1 -: ");
scanf("%d",&num1);
printf("Enter Number 2 -: ");
scanf("%d",&num2 );
swap(num1,num2);

return 0;
}
