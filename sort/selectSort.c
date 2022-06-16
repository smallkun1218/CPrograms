#include "stdio.h"
#include "stdlib.h"

void printArray(int array[], int length);
void selectSort(int array[], int length);
int main(){

    int array[] = {49, 38, 65, 97, 76, 13, 27, 49};
    int length = sizeof(array)/sizeof(array[0]);

    printf("待排序的数组是:");
    printArray(array, length);

    selectSort(array, length);

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

void selectSort(int array[], int length){

    for (int i = 0; i < length - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < length - 1; j++)
        {
            if (array[min] > array[j]){
                min = j;
            }
        }
        if (i != min){
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
    
}