#include <stdio.h>
#include <stdlib.h>

int main(){
    char card_name[3];
    int count = 0;

    while(card_name[0] != "X"){
        puts("Enter the card name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch(card_name[0]){
            case 'Q':
            case 'J':
            case 'K':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name[0]);
                if(val > 0 && val < 10){
                    printf("wrong input");
                    continue;
                }
        }
        if(val > 2 && val < 7){
            count++;
        }else if(val == 10){
            count--;
        }
        printf("Current count: %i\n", count);
    }
    return 0;
}