// Write a program to Find sum of digits of a number. 
#include<stdio.h>
int main()
{
int n, i, sum=0 ,rem ;
printf("Enter a number ");
scanf("%d",&n);
i=1;
while(n!=0)
{
    rem=n%10;
    n=n/10; 
    sum=sum+rem;
}
i++;
printf("the sum of number is %d",sum);
return 0;
}




// Write a program to Reverse a number. 
#include<stdio.h>
int main()
{
    int n, rev=0, rem ,i;
    printf("Enter the nuber");
    scanf("%d",&n);
    i=1;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }
    i++;
    printf("the reverse of number is %d",rev);
    return 0;

}



// Write a program to Find product of digits. 
#include<stdio.h>
int main()
{
    int n,  prod=1, i, rem ;
    printf("Enter the number ");
    scanf("%d",&n);
    i=1;
    while (n!=0)
    {
        rem=n%10;
      prod=prod*rem;
      n=n/10;
    }
    i++;
    printf("the poduct of digits is %d",prod);
    return 0;
}




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



