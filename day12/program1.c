// Write a program to Write function for palindrome. 
#include<stdio.h>
int reverse( int a)
{
    int i , rev=0 ,rem;
    while (a!=0)
    {
        rem = a%10;
        rev =rev*10+ rem;
        a = a/10;
       }  
    return rev;
}
int main()
{
    int n , result  , temp; 

    printf("Enter the number ");
    scanf("%d",&n);
        temp = n;
    result  = reverse(n);
    if(temp==result)
    printf("%d is a palindrome",temp);
    else
    printf("%d is not a palindrome ");
    return 0;
}