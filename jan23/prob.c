#include <stdio.h>

void toUpper(char *str);
void tokenize(char *str, char **words);
void showWords(char **words);
void showStr(char *str);

int main(int argc, char *argv[]){
    char str[]="This is a really really really big test";  //* Array stored on Stack
    char *str2="String Literal";  //* String Literal stored in Global Read-Only toUpper will cause Segmentation Fault
    char *words[10];

    

    printf("%s\n",str);
    toUpper(str);
    printf("%s\n",str);

    tokenize(str,words);
    showWords(words);
    showStr(str);

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

void showWords(char **words){
    while(*words!=NULL){
        //printf("%s\n",*words);
        showStr(*words);
        words++;
    }
}

void showStr(char *str){
    char *ptr=str;

    while(*ptr!='\0'){
        printf("| %x ",ptr);
        ptr++;
    }
    printf("|\n");

    ptr=str;
    while(*ptr!='\0'){
        printf("| %8c ",*ptr);
        ptr++;
    }
    printf("|\n");

}

void tokenize(char *str, char **words){
    int wordCount=0;

    *words=str;
    while(*str!='\0'){
        if(*str==' '){
            *str='\0';
            str++;
            words++;
            *words=str;
        }else{
            str++;
        }
    }
    words++;
    *words=NULL;

}