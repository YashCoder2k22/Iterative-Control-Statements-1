#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2!=0)
        {
            n=n-1;
        }
        else
        {
            printf("%d ",n);
            n=n-2;
        }
    }
    return 0;
}