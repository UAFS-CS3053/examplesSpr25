#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student{
    char fname[50];
    char lname[50];
};

typedef struct student Student;

void showWord(char *str);
void printStudentbyValue(Student student);
void printStudentbyRef(Student *student);


int main(int argc, char *argv[]){
    char str[]={"Hello World"};
    void (*show) (char *);   //Function Pointer
    show=showWord;
    struct student student1;

    strncpy(student1.fname,"Joe",49);
    strncpy(student1.lname,"Smith",49);

    printStudentbyValue(student1);
    printStudentbyRef(&student1);


    show(str);
}

void printStudentbyValue(Student student){
    printf("Size of student: %d\n",sizeof(student));
    printf("Name: %s %s\n",student.fname,student.lname);
}

void printStudentbyRef(Student *student){
    printf("Size of student: %d\n",sizeof(student));
    printf("Name: %s %s\n",(*student).fname,(*student).lname);
      printf("Name: %s %s\n",student->fname,student->lname);
}


void showWord(char *str){
    int index;
    char *ptr;
    ptr=str;

    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
}