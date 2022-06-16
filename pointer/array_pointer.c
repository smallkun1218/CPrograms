#include "stdio.h"

void average(int * score);
void search(int (*score)[4], int n);


int main(){

    int score[][4] = {{65, 70, 70, 60}, {80, 87, 90, 81}, {90, 99, 100, 98}};

    average(&score[0][0]);
    search(score, 2);
    return 0;
}
void average(int * score){
    
    int sum = 0;
    int * p_end = score + 12, *p = score;
    while(p != p_end){
        sum += *p++;
    }
    printf("avg = %.2f\n", sum/12.0);
}

void search(int (*score)[4], int n){
    int i;
    printf("第%d个学生的成绩为:", n);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *(*(score+n)+i));
    }
    printf("\n");
    
}