#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
      if(a<c)
      printf("%d is the smalest number.",a);
      else
      {
        printf("%d is the smallest number.",c);

      }
    else
    if(b<c)
    {
        printf("%d is the smallest nujmber.",b);
    }
    else
    {
        printf("%d is the smallest number.",c);
    }

}