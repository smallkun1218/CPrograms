#include "stdio.h"


int binarySearch(int array[], int targetNumber, int low, int high);
int main(){

    int array[] = {0, 4, 13, 19, 22, 41, 55, 68, 72, 81, 98};

    int targetNumber, result;

    int arrLength = sizeof(array)/sizeof(array[0]);
    printf("请输入在以下数组中要查找的数字：\n");

    for (int i = 0; i < arrLength; i++)
    {
        if(i != arrLength - 1)
            printf("%d ", array[i]);
        else
            printf("%d\n", array[i]);
    }
    scanf("%d", &targetNumber);

    result = binarySearch(array, targetNumber, 0, arrLength - 1);
    
    if (result == -1){
        printf("没有找到数字%d\n", targetNumber);
    }else{
        printf("找到了，%d是第%d个数字。\n",targetNumber, result);
    }

    return 0;
}

int binarySearch(int array[], int targetNumber, int low, int high){

    if (low > high){
        return -1;
    }

    int mid = (high + low)/2;

    if (array[mid] == targetNumber){
        return mid;
    }else if(array[mid] < targetNumber){
        low = mid + 1;
    }else{
        high = mid - 1;
    }
    return binarySearch(array, targetNumber, low, high);
}
