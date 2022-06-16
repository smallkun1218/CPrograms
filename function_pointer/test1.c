#include "stdio.h"

const char * getWord(char c){
    switch(c){
        case 'A':return "Apple";break;
        case 'B':return "Banana";break;
        case 'C':return "Cat";break;
        case 'D': return "Dog";break;
        default: return "None";
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