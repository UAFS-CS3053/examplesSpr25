#include <stdio.h>

void toUpper(char *str);

int main(int argc, char *argv[]){
    char str[]="This is a test";  //* Array stored on Stack
    char *str2="String Literal";  //* String Literal stored in Global Read-Only toUpper will cause Segmentation Fault

    printf("%s\n",str);
    toUpper(str);
    printf("%s\n",str);

    return 0;
}

void toUpper(char *str){
    while(*str!='\0'){
       if(*str >= 'a' && *str<= 'z'){
        *str = *str - 32;
       }
        str++;
    }
}