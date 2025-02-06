#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main(int argc, char *argv[]){
    int index;

    for(index=0;index<argc;index++){
        printf("%d: %s\n",index,argv[index]);
    }

    index=0;
    char **ptr=argv;

    while(*ptr!=NULL){
        printf("%d: %s -%c\n",index++,*ptr,**ptr);
        *(*ptr+2)='\0';
        ptr++; 
    }

    index=0;
    ptr=argv;

    while(*ptr!=NULL){
        printf("%d: %s -%c\n",index++,*ptr,**ptr);
        ptr++; 
    }
}

