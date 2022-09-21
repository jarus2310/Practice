#include<stdio.h>
int main(){
    int n1, n2, res;
    char op;
    
    printf("Enter the operation you want to perform\n");
    scanf("%d%c%d",&n1,&op,&n2);
    
    switch(op){
        case '+':
        printf("sum is %d",n1+n2);
        break;
        
        case '-':
        printf("difference is %d",n1-n2);
        break;
        
        case '*':
        printf("product is %d",n1*n2);
        break;
        
        case '/':
        if (n2==0){
            printf("denominator is 0");
        }
        else{
            float n=(float)n1/n2;
            printf("quotient is %.4f",n);
        }
        break;
        
        case '%':
        printf("reminder is %d",n1%n2);
        break;
        
        default:
        printf("invalid input");
        break;
    }
    
    return 0;

}
