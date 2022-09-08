#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a Number");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d ",n*i);
        i++;
    }
    return 0;
}