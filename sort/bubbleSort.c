#include "stdio.h"
#include "stdlib.h"

void printArray(int array[], int length);
void bubbleSort(int array[], int length);
int main(){

    int array[] = {49, 38, 65, 97, 76, 13, 27, 49};
    int length = sizeof(array)/sizeof(array[0]);

    printf("待排序的数组是:");
    printArray(array, length);

    bubbleSort(array, length);

    printf("排序后的数组是:");
    printArray(array, length);    



    return 0;
}

void printArray(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
            printf("%d", array[i]);
        else
            printf(" %d", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int length){
    int flag = 0;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            flag = 1;
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        if (!flag) break;
    }
    
}