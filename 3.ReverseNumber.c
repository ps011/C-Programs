#include<stdio.h>
int main(){
int number,revNumber=0;
printf("Enter Number -: ");
scanf("%d",&number);
while(number>0){
revNumber = revNumber*10+number%10;
  number = number/10;
}
printf("%d\n",revNumber);

}
