#include "stdio.h"
#include "stdlib.h"

#define SIZE 5

struct studentType{
    char name[10];
    int num;
    int age;
    char addr[15];
};

void readFromFile(int num);
int main(){

    readFromFile(0);

    return 0;
}

void readFromFile(int num){
    struct studentType student;
    int i;
    FILE *fp;

    if ((fp = fopen("stu.txt", "rb")) == NULL){
        printf("cannot open file!\n");
        return ;
    }

    int offset = sizeof(struct studentType) * num;

    fread(&student, sizeof(struct studentType), 1, fp);
    printf("%-10s %4d %4d %-15s\n", student.name, student.num, student.age, student.addr);

    fclose(fp);
}