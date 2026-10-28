#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'N':
        case 'n':
        printf("North direction");
        break;

        case 'E':
        case 'e':
        printf("East direction");
        break;
       

       case 'W':
        case 'w':
        printf("west direction");
        break;

        case 'S':
        case 's':
        printf("North direction");
        break;

        default:
        printf("invalid direction");
    }
}