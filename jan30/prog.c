#include <stdio.h>


int main(int argc, char *argv[]){
    int index;

    for(index=0;index<argc;index++){
        printf("%d: %s\n",index,argv[index]);
    }

    index=0;
    char **ptr;
    ptr=argv;

    while(*ptr!=NULL){
        printf("%d: %s %c\n",index,*ptr,**ptr);
        *(*ptr+2)='X';
        ptr++;
        index++;
    }

    index=0;
    ptr=argv;

    while(*ptr!=NULL){
        printf("%d: %s %c\n",index,*ptr,**ptr);
        ptr++;
        index++;
    }
    return 0;
}