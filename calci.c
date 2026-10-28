#include<stdio.h>
int main(){
    int n1,n2;
    char op;
    scanf("%d%c%d",&n1,&op,&n2);
    if(op=='/' && n2==0){
        printf("Cant be divided by zero");
        return 1;
    }
    switch(op){
        case '+':
        printf("%d",n1+n2);
        break;

         case '-':
        printf("%d",n1-n2);
        break;

         case '*':
        printf("%d",n1*n2);
        break;

         case '/':
        printf("%g",(float)n1/n2);
        break;

        default:
        printf("Invalid operation");
    }
}