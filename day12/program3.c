// Write a program to Write function Fibonacci. 
#include<stdio.h>
int fib(int a)
{
    int  i , first=0 , second=1,next ;
    if(a==1)
    return 0;
    else if(a==2)
    return 1;
    for(i=3;i<=a;i++)
    {
    next = first+second;
    first = second;
    second = next;
    }
    return next;
}
int main()
{
    int n , result;
    printf("Enter the number: \n");
    scanf("%d",&n);
    result = fib(n);
    printf("%d is the fibonacci of %d",result,n);
    return 0;
}