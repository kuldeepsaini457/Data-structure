#include<conio.h>
#include<stdio.h>
FILE *fptr;
void main()
{
	int c;
	int x;
	fptr=fopen("tree_input.txt","r");
	fscanf(fptr,"%d",&c);
	printf("%d",c);
	
	fscanf(fptr,"%d",&c);
	printf("%d",c);
	
	fscanf(fptr,"%d",&c);
	printf("%d",c);
	
	fscanf(fptr,"%d",&c);
	printf("%d",c);
}
