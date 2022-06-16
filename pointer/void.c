#include "stdio.h"
#include "math.h"

int main(){

    void *void_ptr = NULL;
    int *int_ptr, num = 10;
    double *double_ptr, radius = 2.5;
    void_ptr = &num;
    int_ptr = (int *)void_ptr;
    void_ptr = &radius;
    double_ptr = (double *)void_ptr;



    return 0;
}