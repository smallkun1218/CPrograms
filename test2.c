#include "stdio.h"

int main(){

    int a = 12;

    //a = 12 a * a = 144
    //a = 12 a -= 144;
    //a = -132 a += a
    //a = -264
    a += a -= a * a;
    printf("%d\n", a);

    return 0;
}