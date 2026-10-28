#include<stdio.h>
int main{
    char ch;
    scanf("%c",&ch);
    int main(){
    switch(1){
        case 1:
            if(ch>='A' && ch<='Z'){
                printf("Uppercase");
            }
            else if(ch>='a' && ch<='z'){
                printf("Lowercase");
            }
            else if(ch>='0' && ch<='9'){
                printf("Digit");
            }
            else{
                printf("Symbol");
            }
    }
}