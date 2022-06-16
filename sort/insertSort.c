#include "stdio.h"
#include "stdlib.h"

void printArray(int array[], int length);
void insertSort(int array[], int length);
void insertSort2(int array[], int length);
int binarySearch(int array[], int target, int low, int high);

int main(){

    int array[] = {0, 1, 2, 1, 2};
    int length = sizeof(array)/sizeof(array[0]);

    printf("待排序的数组是:");
    printArray(array, length);

    insertSort2(array, length);

    printf("排序后的数组是:");
    printArray(array, length);    



    return 0;
}

void printArray(int array[], int length){
    for (int i = 1; i < length; i++)
    {
        if (i == 0)
            printf("%d", array[i]);
        else
            printf(" %d", array[i]);
    }
    printf("\n");
}

void insertSort(int array[], int length){

    for (int i = 2; i < length; i++)
    {
        array[0]  = array[i];
        int j  = i - 1;
        while(array[0] < array[j]){
            array[j+1] =  array[j];
            j--;
        }
        array[j+1] = array[0];
    }
    
}

void insertSort2(int array[], int length){

    for (int i = 2; i < length; i++)
    {
        array[0]  = array[i];
        int target = binarySearch(array, array[i], 1, i - 1);
        int j;
        for(j = i - 1;j > target;j--)
            array[j+1] = array[j];
        array[j+1] = array[0];
    }
}

int binarySearch(int array[], int target, int low, int high){

    int mid = low + high >> 1;

    if (low > high){
        return mid;
    }

    if (target <  array[mid]){
         high = mid - 1;
    }else{
        low = mid + 1;
    }

    return binarySearch(array, target, low, high);
}