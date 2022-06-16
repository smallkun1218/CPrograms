#include "stdio.h"


void hanoi(int n, char x, char y, char z);
void move(char c1, char c2);
int main(){

    int n;
    printf("Please input n:");

    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');    


    return 0;
}

void hanoi(int n, char x, char y, char z){
    if (n == 1){
        move(x, z);
    }
    else{
        hanoi(n - 1, x, z, y);
        move(x, z);
        hanoi(n - 1, y, x, z);
    }
}

void move(char c1, char c2){
    printf("%c -> %c\n", c1, c2);
}