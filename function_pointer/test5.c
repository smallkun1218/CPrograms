#include "stdio.h"

void function1(int);
void function2(int);
void function3(int);


int main(){
    void (*f[3])(int) = {function1, function2, function3};
    int choice;
    printf("输入一个数字：范围[0~2]:");

    scanf("%d", &choice);
    while(choice >= 0 && choice < 3){
        (*f[choice])(choice);//(*f[choice])(choice)
        printf("输入一个数字：范围[0~2]:");
        scanf("%d", &choice);
    }
    printf("程序运行结束。");


    return 0;
}

void function1(int a){
    printf("我是1 : %d\n", a);
}
void function2(int a){
    printf("我是2 : %d\n", a);

}
void function3(int a){
    printf("我是3 : %d\n", a);

}