#include <stdio.h>

int main(void)
{
    int a, b, c;                        //等价于int a; int b; int c;
    int t;                            
    printf("请输入三个整数(中间以空格分隔):");
    scanf("%d %d %d\n", &a, &b, &c);

    //编写代码完成a是最大值 b是中间值 c是最小值
    printf("%d %d %d\n", a, b, c);

    //编写代码完成a是最大值   b是中间值  c是最小值
    if (a < b){
        a ^= b;
        b ^= a;
        a ^= b;
    }
    // if (b < c){

    // }

    // if (a < b){

    // }

    printf("%d %d %d\n", a, b, c, t);

 return 0;
}