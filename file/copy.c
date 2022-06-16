#include"stdio.h"
#include "stdlib.h"




void copy(char fileS[], char fileT[]);
long get_file_len(FILE * p);
int main(){

    char fileS[30], fileT[30];
    printf("请输入你要复制的源文件：");
    scanf("%s", fileS);

    printf("请输入你要复制的目标文件：");
    scanf("%s", fileT);

    copy(fileS, fileT);
    return 0;
}

void copy(char fileS[], char fileT[]){

    char ch;
    FILE *fpSource, *fpTarget;
    if ((fpSource=fopen(fileS, "r")) == NULL){
        printf("文件打开失败！\n");
        exit(-1);
    }

    if ((fpTarget=fopen(fileT, "w")) == NULL){
        printf("文件打开失败！\n");
        exit(-1);
    }

    long end = get_file_len(fpSource);
    while(1){
        if (ftell(fpSource) == end){
            break;
        }
        ch = fgetc(fpSource);
        fputc(ch, fpTarget);
    }
    fclose(fpSource);
    fclose(fpTarget);
    printf("文件复制成功！\n");

    return;
}

long get_file_len(FILE * p){
    long f_len = 0;
    if (NULL == p){
        return f_len;
    }

    fseek(p, 0, SEEK_END);

    f_len = ftell(p);
    fseek(p, 0, SEEK_SET);
    return f_len;
}
