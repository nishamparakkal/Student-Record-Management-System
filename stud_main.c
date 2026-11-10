#include "student.h"
int main()
{

SLL *headpointer=0;
char op;


load(&headpointer);
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
	case 'v' : save(headpointer);break;
	case 'e' : exit_menu(headpointer);break;
	case 'l' : deleteall(&headpointer);break;
	case 'r' : reverse(&headpointer);break;
	case 't' : sortdata(headpointer);break;
	default : printf("invalid option\n");break;
}
}
}

void exit_menu(SLL *ptr)
{
printf("enter the choice\n");
printf("\ns : save and exit\ne : exit\n");

char ch;
scanf(" %c",&ch);

if(ch=='s')
{
save(ptr);
exit(0);
}

else if(ch=='e')
exit(0);

}









