// Write a program to Print multiplication table of a given number.
// #include<stdio.h>
// int main()
// {
//     int n, i, result ;
//     printf("Enter the number ");
//     scanf("%d",&n);
//     for(i=1; i<=10 ; i++)
//     {
//         result=n*i;
//         printf("%d*%d=%d",n,i,result);
//         printf("\n");
//     }
//     return 0;
// }



// Write a program to Find factorial of a number.
// #include<stdio.h>
// int main()
// {
//     int n,fact=1, i;
//     printf("enter the nnumber");
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++)
//     {
//         fact= fact*i;
//     }
//     printf("factorial of number is %d",fact) ;
//     return 0;
// }




// Write a program to Count digits in a number. 
#include<stdio.h>
int main()
{
    int n , count =0, i ;
    printf("Enter a number");
    scanf("%d",&n);
    i=1;
    while(n!=0){
        n=n/10;
        count++;
    }
    i++;
    printf("the number of digit =%d",count);
    return 0;
}