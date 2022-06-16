#include "stdio.h"
#include "stdlib.h"

typedef struct{
    char no[10];
    char name[10];
    double foreign;
    double spec1;
    double spec2;
    double total;
}StudentType;

void WriteToFile();
void ReadFromFile();
int main(){

    int select;
    do{
        printf("1.录入成绩 2.输出成绩 0.退出\n");
        printf("请输入要执行的操作:");
        scanf("%d", &select);
        switch (select)
        {
        case 1:WriteToFile();break;
        case 2:ReadFromFile();break;
        default:
            printf("退出程序！\n");
            break;
        }
    }while((select == 1 || select == 2));


    return 0;
}

void WriteToFile(){
    FILE *fp = NULL;

    StudentType stu;
    char flag = 'y';

    fp = fopen("student.txt", "a");

    if (fp == NULL){
        printf("文件打开失败");
        exit(1);
    }

    while((flag == 'y' || flag == 'Y')){
        printf("请输入考生考号:");
        scanf("%s", stu.no);
        printf("请输入考生姓名:");
        scanf("%s", stu.name);
        printf("请输入考生外语成绩:");
        scanf("%lf", &stu.foreign);
        printf("请输入考生专业课1成绩:");
        scanf("%lf", &stu.spec1);
        printf("请输入考生专业课2成绩:");
        scanf("%lf", &stu.spec2);

        stu.total = stu.foreign + stu.spec1 + stu.spec2;

        fprintf(fp, "%10s%10s%8.2f", stu.no, stu.name, stu.foreign);
        fprintf(fp, "%8.2f%8.2f%8.2f", stu.spec1, stu.spec2, stu.total);
        fputc('\n', fp);
        fflush(stdin);
        printf("继续输入吗?继续请输入y或Y:");
        scanf("%c", &flag);
    }
    fclose(fp);
    return ;
}
void ReadFromFile(){
    FILE *fp = NULL;
    StudentType stu;
    fp = fopen("student.txt", "r");
    if(fp == NULL){
        printf("打开文件失败!\n");
        exit(1);
    }
    printf("  考生姓名  总分\n");
    while(!feof(fp)){
        fscanf(fp, "%s%s", stu.no, stu.name);
        fscanf(fp, "%lf%lf%lf%lf\n", &stu.foreign, &stu.spec1, &stu.spec2, &stu.total);
        printf("%10s%8.2lf\n", stu.name, stu.total);
    }
    printf("\n");
    fclose(fp);
    return ;
}