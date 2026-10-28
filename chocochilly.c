#include<stdio.h>
int main(){
    int player1=0,player2=0;
    int p1,p2;
    int chocolate=15;
    printf("<------------chocolatechillygame------------>\n");
    label:
    while(chocolate>0){
        printf("Player 1 turn:");
        scanf("%d",&p1);
        if(p1>=1 &&p1<=3 && p1<=chocolate){
        printf("Player 1 has taken %d chocolates\n",p1);
        chocolate=chocolate-p1;
        printf("Chocolates left:%d\n",chocolate);
        }
        else{
            printf("Invalid input, please enter a number between 1 and 3 and less than or equal to remaining chocolates\n");
            goto label;
        }
        if(chocolate==0){
            printf("Player 2 takes the chillies and loses the game\n");
            break;
        }

        printf("Player 2 turn:");
        scanf("%d",&p2);
        printf("Player 2 has taken %d chocolates\n",p2);
        if(p2>=1 && p2<=3 && p2<=chocolate){

        chocolate=chocolate-p2;
        printf("Chocolates left:%d\n",chocolate);
        }
        else{
            printf("Invalid input, please enter a number between 1 and 3 and less than or equal to remaining chocolates\n");
            continue;
        }
        if(chocolate==0){
            printf("Player 1 takes the chillies and loses the game\n");
            break;
        }
    }
    return 0;
}