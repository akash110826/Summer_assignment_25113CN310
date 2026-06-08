// Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main()
{
int n , i ,  rem , rev =0 , temp;
printf("Enter the number ");
scanf("%d",&n);
temp=n;

while (n!=0)
{
    rem = n%10;
    rev = rev*10+rem;
    n=n/10;
}

if (rev==temp)
{
    printf("the entered number  is palindrome");
}
else
{
printf("the entered number is not palindrome");
}
return 0;
} 