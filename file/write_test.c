#include "stdio.h"
#include "stdlib.h"

#define SIZE 5

struct studentType{
    char name[10];
    int num;
    int age;
    char addr[15];
};

void saveToFile(struct studentType stud[], int num);
int main(){


    struct studentType stud[SIZE];

    printf("Please enter data of students:\n");

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%s%d%d%s", stud[i].name, &stud[i].num, &stud[i].age, &stud[i].addr);
    }

    saveToFile(stud, SIZE);
    


    return 0;
}

void saveToFile(struct studentType stud[], int num){
    FILE *fp;
    int i;

    if ((fp = fopen("stu.txt", "wb")) == NULL){
        printf("cannot open file\n");
        return ;
    }

    for(int i = 0;i < num;i++){
        if (fwrite(&stud[i], sizeof(struct studentType), 1, fp) != 1){
            printf("file write error\n");
        }
    }
    fclose(fp);
}