#include"student.h"

void load(SLL **ptr)
{

	FILE *fp;
	SLL *new=*ptr,*last;
	
	fp=fopen("student.dat","r");
	if(fp)
	{
		printf("file found\n");
		while(1)
		{
			new=malloc(sizeof(SLL));
			if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percentage)==-1)
				break;
			new->next=0;
			if(*ptr==0)
				*ptr=new;
			else
			{
				SLL *last=*ptr;
				while(last->next)
					last=last->next;
				last->next=new;
			}
		}
		
		
		fclose(fp);
		return;
	}

}
