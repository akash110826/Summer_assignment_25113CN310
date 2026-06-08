// Write a program to Check strong number.
#include<stdio.h>
int main()
{
    int  num , i , sum=0 , fact=1 ,temp , rem;
    printf("Enter the number");
    scanf("%d",&num);
    temp  = num;
    while (num!=0)
    {
       rem = num%10;
       fact = 1;
       i=1;
       while(i <= rem)
       {
         fact = fact*i;
         i++;
        
       }
        sum  = sum+fact;
       num  = num/10; 
    }
    if(sum == temp)
    {
        printf("%d is   a strong number",temp);
    }
    else
    printf("%d is not a strong number",temp);
    return 0;
}