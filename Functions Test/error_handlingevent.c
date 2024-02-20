#include <stdio.h>

int eventChoice;

int main (){
    while (1) {
    printf("Enter your choice: ");
    scanf("%d", &eventChoice);


        if (eventChoice >= 1 && eventChoice <= 2) {

            break;
        }
        else {
            while(getchar() != '\n');
        }
    }
    return 0;
}