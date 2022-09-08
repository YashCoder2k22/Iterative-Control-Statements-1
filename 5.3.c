#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d ",n);
        n--;
    }
    return 0;
}