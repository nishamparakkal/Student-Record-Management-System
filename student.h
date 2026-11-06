#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}SLL;

void add(SLL**);
void del(SLL**);
void list(SLL*);
void modify(SLL**);
