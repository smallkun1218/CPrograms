#include "stdio.h"
#include "math.h"

void swap(int *a, int *b);
void inverse1(int *p, int n);
void inverse2(int (*p)[4]);

int main(){
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // inverse1(&a[0][0], 12);
    inverse2(a);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}

void inverse1(int *p, int n){
    int *q = p, *q_end = p + n - 1;

    while(q < q_end){
        swap(q, q_end);
        q_end--;
        q++;
    }
}

void inverse2(int (*p)[4]){
    int (*q)[4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 1 && j == 2){
                break;
            }
            swap(&p[i][j], &p[2-i][3-j]);
        }
        
    }
    
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
