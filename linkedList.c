#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int info;
	struct list *next;
}LIST;

void main(){
	FILE *fptr;
	fptr=fopen("input.txt","r");
	if(fptr==NULL)
	{
		printf("Cannot open file...exiting.");
		exit(0);
	}
	c=fgetc(fptr);
	while(c!=EOF){
		
	}
}
