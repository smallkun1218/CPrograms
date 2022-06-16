#include "stdio.h"


int f(int n){
    if (n == 1 || n == 2) return 1;
    else return f(n - 1)+ f(n - 2);

}
int main(){

    int n;
    printf("请输入Fibonacci数列的项数:");
    scanf("%d", &n);

    printf("Fibonacci数列的第%d项是%d\n", n, f(n));



    return 0;
}