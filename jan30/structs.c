#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char fname[50];
    char lname[50];
};

void showStudent(struct student student);
void showStudentRef(struct student *student);

int main(int argc, char *argv[]){

    struct student student1;
    strncpy(student1.fname,"Joe",49);
    strncpy(student1.lname,"Smith",49);

    showStudent(student1);
    showStudentRef(&student1);

    return 0;
}

void showStudent(struct student student){
    printf("Size: %d\n",sizeof(student));
    printf("Name: %s %s\n",student.fname,student.lname);
}

void showStudentRef(struct student *student){
    printf("Size: %d\n",sizeof(student));
    printf("Name: %s %s\n",student->fname,student->lname);
}