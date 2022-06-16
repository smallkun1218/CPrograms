#include "stdio.h"

unsigned fac(unsigned n){
    unsigned f;
    if (n == 0)
        f = 1; //递归的出口
    else
        f = n * fac(n-1); //递归的出口

    return f;
}

int main(){

    unsigned n;
    printf("输入要求的阶乘的数：");

    scanf("%d", &n);

    printf("%d的阶乘是%d\n", n, fac(n));



    return 0;
}