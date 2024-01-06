#include<stdio.h>
void main()
{
    int a,x;
    printf("enter the integer");
    scanf("%d",&a);
    x=a++;
    printf("the increment prefix is %d\n",x);
    x=++a;
    printf("the increment prefix is %d",x);
}