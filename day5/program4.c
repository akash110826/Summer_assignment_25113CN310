// Write a program to Find largest prime factor. 
#include<stdio.h>
int main()
{
int num ,i ,max,orignal ;
printf("Enter the number");
scanf("%d",&num);
orignal = num;
for( i= 2 ; i<=num ; i++)
{
    while (num%i==0)
    {
        max = i;
        num = num/i;
     }
    
}
printf("%d is the greatest prime factor of %d ",max,orignal);
return 0;
}