#include "stdio.h"


void swap(int * a, int * b);
void input(int * nums, int n);
void output(int * nums, int n);
void process(int * nums, int n);
void process2(int * nums, int n);

int main(){

    int a[10];

    input(a, 5);
    process(a, 5);
    output(a, 5);

    return 0;
}


void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void input(int nums[], int n){
    printf("请输入%d个数字:", n);;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
}

void output(int nums[], int n){
    printf("调整后:");
    for (int i = 0; i < n; i++)
    {
        if (i == 0){
            printf("%d", nums[i]);
        }else{
            printf(" %d", nums[i]);
        }
    }
    printf("\n");
}

void process(int nums[], int n){
    int min, max;
    min = max = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < nums[min]) min = i;
        if (nums[i] > nums[max]) max = i;
    }
    if (min != 0){
        swap(&nums[0], &nums[min]);
    }
    if (max != n - 1){
        if (max != 0){
            swap(&nums[n - 1], &nums[max]);
        }else{
            swap(&nums[n - 1], &nums[min]);
        }
    }
}

void process2(int * nums, int n){
    int *p;
    int *min, *max;
    p = max =  min = nums;

    for(;p < nums + n;p++){
        if (*p < *min) min = p;
        if (*p > *max) max = p;
    }

    if (min != nums){
        swap(nums, min);
    }
    if (max != nums + n - 1){
        if (max != min){
            swap(min, nums + n - 1);
        }else{
            swap(max, nums + n - 1);
        }
    }

    output(nums, n);

        
}