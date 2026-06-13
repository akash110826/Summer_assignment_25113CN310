// Write a program to Write function for Armstrong. 
#include<stdio.h>
#include<math.h>
int arm(int a)
{ 
    int temp  = a, count=0 , rem ;
    double sum =0.0 ;
    while (temp!=0)
    {
       temp = temp/10;
        count++;
    }
    while(a!=0)
    {
        rem = a%10;
        sum = sum + pow(rem ,count);
        a=a/10;
    }
    return (int)sum;
}
int main()
{
    int  n , result ;
     printf("Enter the number: \n");
    scanf("%d",&n);
    result  = arm(n);
    if(result==n)
    printf("%d is armstrog number",n);
    else
    printf("%d is not an armstrong number",n);
    return 0;
}