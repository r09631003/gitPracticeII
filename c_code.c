#include<stdio.h>

void LOOP(void);

int main(){
    LOOP();
}

void LOOP(){
    int i = 0;
    for(i = 0; i < 12; i++){
        printf("%d ", i+1);
    }
    printf("\n");
}
