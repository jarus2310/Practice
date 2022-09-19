#include <stdio.h>
int main()
{
    int n,k;
    printf("enter the number you want the multiplication tables for\n");
    scanf("%d",&n);
    int i;
    for( i=1;i<=10;++i)
    {
    k=n*i;
    printf("%d * %d = %d\n",n,i,k);
    }
return 0;
}
