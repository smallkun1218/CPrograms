#include "stdio.h"

const int N = 2;
struct StudentType{
    char no[10];
    double foreign;
    double spec;
    double total;
};
void InputMarks(struct StudentType studnet[], int n);
void AddMarks(struct StudentType studnet[], int n);
void OutputMarks(struct StudentType studnet[], int n);


int main(){
    struct StudentType student[10];
    int n;
    printf("请输入学生人数:");
    scanf("%d", &n);
    InputMarks(student, n);
    AddMarks(student, n);
    printf("每个学生的总成绩为:\n");
    OutputMarks(student, n);


    return 0;
}

void InputMarks(struct StudentType studnet[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("请输入%d考生考号: ", i+1);
        scanf("%s", studnet[i].no);
        printf("请输入%d考生外语成绩: ", i+1);
        scanf("%lf", &studnet[i].foreign);
        printf("请输入%d考生专业课成绩: ", i+1);
        scanf("%lf", &studnet[i].spec);
    }
    
}
void AddMarks(struct StudentType studnet[], int n){
    for (int i = 0; i < n; i++)
    {
        studnet[i].total = studnet[i].foreign + studnet[i].spec;
    }
    
}
void OutputMarks(struct StudentType studnet[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%s的总分是%5.1lf\n", studnet[i].no, studnet[i].total);
    }
    
}