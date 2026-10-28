#include<stdio.h>
int main(){
    int option,price;
    int coffee=0,cake=0,sandwich=0,coke=0;
    float total=0;
    int i=1;
    printf("<---Welcome to Nandhini cafe--->\n");
    do{
    label:
    printf("<--Menu-->\n");
    printf("1.Coffee=40\n2.Cake=80\n3.Sandwich=70\n4.Coke=40\n");
    printf("Enter your option: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        price=40;
        total+=price;
        coffee++;
        printf("You ordered coffee/n");
        break;

        case 2:
        price=80;
        total+=price;
        cake++;
        printf("You ordered cake\n");
        break;

        case 3:
        price=70;
        total+=price;
        sandwich++;
        printf("You ordered Sandwich\n");
        break;

        case 4:
        price=40;
        total+=price;
        coke++;
        printf("You ordered coke\n");
        break;

        case 0:
        break;

        default:
        printf("Sorry! The option is not available\n");
        goto label;

    }
     printf("<---If your order is complete press 0 for bill generation_--->\n");


}while(option>=1 && option<=5);
float gst,final;
gst=total*4.0/100;
final=total+gst;
if(coffee){
    printf("%d. coffee (%d*40 =Rs.%d)\n",i++,coffee,coffee*40); 
}
if(cake){
    printf("%d. cake (%d*80 =Rs.%d)\n",i++,cake,cake*80);
}
if(sandwich){
    printf("%d. sandwich  (%d*70 =Rs.%d)\n",i++,sandwich,sandwich*70);
}
if(coke){
    printf("%d. coke  (%d*40 =Rs.%d)\n",i++,coke,coke*40);
}
printf("\n------------------------------------------------\n");
printf("Total  =%g rs\n",total);
printf("GST(5percent) =%g rs\n",gst);
printf("Total amount =%g rs\n",final);
printf("----------------------------\n");

printf("Select the payment method:\n1.Cash\n2.Card\n");
int payment;
scanf("%d",&payment);
switch(payment){
    case 1:
    printf("You have selected cash payment for Rs.%g\n",final);
    break;

    case 2:
    printf("You have selected card payment for Rs.%g\n",final);
    break;

    default:
    printf("Invalid payment method\n");
}
printf("Thank you for visiting Nandhini cafe\n");
}