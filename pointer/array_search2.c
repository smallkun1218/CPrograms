#include "stdio.h"

#define N 6

int main(){

    int a[N] = {2, 4, 8, 6, 5, 3}, i, key, index = 0;
    int *p  =  a;
    key =  8;
    for (; p < a+N; p++)
    {
        if (*p == key){
            index = p - a;
            break;
        }
    }
    if (i == N) index = -1;
    if (index == -1)
        printf("查找失败！\n");
    else
        printf("查找成功,元素%d在集合中的序号是%d\n", key, index);
    



    return 0;
}