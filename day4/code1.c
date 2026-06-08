// Write a program to Generate Fibonacci series.
#include<stdio.h>
int main()
{
    int n , a = 0 ,b =1 ,temp , i ;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d  %d  ",a,b);
    for(i=3 ;  i <= n ; i++)
    {
     temp = a+b;
      a = b ;
      b= temp;
      printf(" %d  ",temp);
    }
    
    return 0;
} 





