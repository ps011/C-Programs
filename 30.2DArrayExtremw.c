#include<stdio.h>
int main()
{
  int max,min;
  int a[3][4],i,j;
  printf("enter the eleme of array");
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
max=a[0][0];
min=a[0][0];
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
    if(a[i][j]>max)
    {
    max= a[i][j];
    }
    else if(a[i][j]<min)

    {
      min=a[i][j];
    }

    }

  }
  printf("the max elem is %d",max);
  printf("the min elem is %d",min);
}
