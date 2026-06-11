// Write a program to Write function to find factorial.
#include<stdio.h>
int fact(int a )
{
    int i , factorial =1 ;
    for(i=1;i<=a;i++)
    {
        factorial  = factorial*i;
    }
    return factorial;
}
int main()
{
    int n , result;
    printf("Enter the number");
    scanf("%d",&n);
    result = fact(n);
    printf("%d is factorial of %d",result , n);
    return 0;
}
