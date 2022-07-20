#include<stdio.h>
int main()
{ 
    int i,n;
    printf("enter the vaulue of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        printf("%d ",2*i-1);
    }
    return 0;
}