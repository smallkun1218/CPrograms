#include "stdio.h"


void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}


void swap2(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 9;
    printf("swap函数调用前: x = %d y = %d\n", x, y);
    swap2(&x, &y);
    printf("swap函数调用后: x = %d y = %d\n", x, y);



    return 0;
}