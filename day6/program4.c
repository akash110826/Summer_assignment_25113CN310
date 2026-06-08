// Write a program to Find x^n without pow()
#include<stdio.h>
int main()
{
    int x , n , i , result =1 ;
    printf("Enter the base and exponent ");
    scanf("%d%d",&x,&n);
    if(n==0){printf("result  = 1");
    return 0;
    }
    for ( i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf("The result is = %d",result);
    
return 0;
}