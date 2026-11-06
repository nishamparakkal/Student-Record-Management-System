#include"student.h"
int main()
{

SLL *headpointer=0;
char op;
while(1)
{

printf("******* STUDENT RECORD MENU *******\n");
printf("\na/A : ADD new record\nd/D : Delete a record\ns/S : Show the list\nm/M : Modify a record\nv/V : Save records\nt/T : Sort the list\nl/L : Delete all the records\nr/R : Reverse the list\ne/E : Exit\n");



scanf(" %c",&op);
switch(op)
{
	case 'a' : add(&headpointer);break;
	case 's' : list(headpointer);break;
	case 'd' : del(&headpointer);break;
	case 'm' : modify(&headpointer);break;
}
}
}
