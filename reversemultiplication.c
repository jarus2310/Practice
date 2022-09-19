#include <stdio.h>
int main(){
    int n,i,k;
    printf("Enter the nunber for reverse order of multiplication\n");
    scanf("%d",&n);
    
    for(i=10;i>=1;i--){
        k=n*i;
        printf("%d*%d=%d\n",n,i,k);
    }

    return 0;
}
