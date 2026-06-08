// Write a program to Recursive sum of digits.
#include<stdio.h>
int sum(int n){
    int rem ;
    if(n == 0){
        return 0;
    }
    else
    return n%10 + sum(n / 10);
}

    int main()
    {
        int num , result ; 
        printf("Enter the number");
        scanf("%d",&num);
        result = sum(num);
        printf("The sum of digits is %d",result);

    }
    



