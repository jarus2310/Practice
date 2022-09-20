#include <stdio.h>
int main()
{
    int n,i,k;
    printf("enter the number you want the multiplication tables for\n");
    scanf("%d",&n);
    for( i=1;i<=10;++i)
    {
    k=n*i;
    printf("%d * %d = %d\n",n,i,k);
    }
return 0;
}
