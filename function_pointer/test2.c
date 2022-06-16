#include "stdio.h"

const char * getWord(char c){
    char str1[] = "Apple";
    char str2[] = "Banana";
    char str3[] = "Cat";
    char str4[] = "Dog";
    char str5[] = "None";


    switch(c){
        case 'A':return str1;break;
        case 'B':return str2;break;
        case 'C':return str3;break;
        case 'D': return str4;break;
        default: return str5;
    }
}

int main(){

    char input;
    printf("Please input a character:");
    input = getchar();
    printf("%c\n", input);

    printf("%s\n", getWord(input));
    

    return 0;
}