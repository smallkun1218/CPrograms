#include "stdio.h"

int main(){

    int room = 1582;
    int *p = NULL;
    p = &room;
    printf("教室房间号是：%X\n", p);
    printf("助教的教师编号是：%d\n", *p);


    return 0;
}