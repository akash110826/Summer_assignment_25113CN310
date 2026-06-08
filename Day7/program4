// Write a program to Recursive reverse number. 
#include<stdio.h>
int rev( int n ,int reverse )
{   
    if( n == 0)
    {return reverse;}
    else
    return rev( n/10 , reverse*10+ n%10  )  ;
}
int main()
{
    int num ,  reverse;
    printf("Enter the number ");
    scanf("%d",&num);
    reverse  = rev(num , 0);
    printf("The reverse of %d is %d",num ,reverse);
    return 0 ;

}
