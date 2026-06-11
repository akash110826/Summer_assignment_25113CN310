//Write a program to Write function to check prime.
#include<stdio.h>
int prime(int a)
{
    int i ,count =0 ;
    for(i=1;i<=a;i++)
    {
       if(a%i==0)
       count++;
    }
    
    return count ;
    
} 
int main()
{
    int a ,result ;
    printf("Enter the number");
    scanf("%d",&a);
    result = prime(a);
    if(result == 2)
    printf("%d is a prime number",a);
    else
    printf("%d is not a prime number",a);
    return 0;
}