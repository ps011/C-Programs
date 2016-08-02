#include<stdio.h>
int arrayLength(int *a){
  int i=0;
while(a[i] != '\0'){
  i++;
}
return i;
}

// int findOdd(int a[9]){
// int length = 9,i,j,count=0;
//
// for(i=0;i<length;i++){
//
//     for(j=0;j<length;j++){
//
//       if(a[i] == a[j]){
// // printf("%d\n",a[i] );
//         count = count+1;
//
//       }
//
//     }
//   if(count==2){
//   //  printf("%d\n",a[i] );
//     //return a[i];
//   }
//   else{
//     count =0;
//   }
//
// }
// //return 0;
//   }
int main(){
  int i=0,j=0,a[9],count=0;
for(i=0;i<8;i++){
  scanf("%d\n",&a[i]);
}

for(i=0;i<8;i++){
    for(j=0;j<8;j++)
    {printf("%d\n",a[i] );
      if(a[i] == a[j])
      {
        printf("%d is compared to %d\n",a[i],a[j]);
        count++;
      }
    }
    if(count != 2){
      printf(" Odd %d\n", a[i+1]);
    }
    else{
      count = 0;
    }

}

//printf("Odd one -: %d\n", findOdd(a));
return 0;
}
