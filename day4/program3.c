// Write a program to Check Armstrong number. 
#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,temp,rem,orignal  ; 
    double  power =0.0 ;
    printf("Ener the number");
    scanf("%d",&n);
    orignal = n;
    temp = n;
    while (temp!= 0)
    {
      count++;
      temp = temp/10;
    }
    temp = n;
    while (temp!=0)
    {
     rem = temp%10;
     power = power + pow(rem,count);
    temp = temp/10;
    }
    if(orignal == (int) power)
    printf("%d is an armstrong number",n);
    else
    printf("%d is not an armstrong number",n);
    return 0;
  } 