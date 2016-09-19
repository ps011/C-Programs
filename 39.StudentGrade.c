#include<stdio.h>

int calculateGrade(int marks){

if(marks>=60 && marks<=100){
  return 1;
}
else if(marks>=50 && marks<60){
  return 2;
}
else if(marks >=40 && marks < 50){
  return 3;
}
else{
  return 4;
}
}

int main(){
int marks=0;

printf("Enter Marks -: ");
scanf("%d",&marks);

switch(calculateGrade(marks)){
  case 1 : {printf("Grade A\n"); break;}
  case 2 : {printf("Grade B\n"); break;}
  case 3 : {printf("Grade C\n"); break;}
  case 4 : {printf("Failed\n"); break;}
}
return 0;
}
