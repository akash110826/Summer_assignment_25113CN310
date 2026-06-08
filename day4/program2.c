// Write a program to Find nth Fibonacci term. 
#include<stdio.h>
int main()
{
    int n,i , temp , a = 0, b = 1  ;
    printf("Enter the term");
    scanf("%d",&n);
    if (n==1){
    printf("the nth term is %d",a);
    return 0;
      }
    if (n==2){
    printf("the nth term is %d",b);
    return 0;
    }
    for(i=3 ; i<=n ; i++)
    {
     temp = a+ b;
     a = b;
     b = temp;
    }
    printf("the nth term is %d",temp);
   
    return 0;
}