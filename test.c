#include "stdio.h"


int main(){

    int array[5], length = 5, i, j;


    printf("请输入%d个数据:", length);
    
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
    

    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - 1 - i; j++)
        {
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }   
    }

    printf("排序后的数组是:");
    for (i = 0; i < length ; i++){
        printf("%d ", array[i]);
    }
    printf("\n");


    return 0;
}

