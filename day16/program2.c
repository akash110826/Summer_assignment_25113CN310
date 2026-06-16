// Write a program to Find maximum frequency element.
#include<stdio.h>
int main()
{
    int n ,maxfreq = 0, result = 0 ;
    printf("Enter the size ");
    scanf("%d",&n);
    printf("Enter the the elements ");
    int a[n];  
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if ( a[i] == a[j])
            count++;
            if(count>maxfreq){
                maxfreq = count;
                result = a[i];
            }
        }
    }
    printf("%d has maximum frequency",result);


return 0;
}