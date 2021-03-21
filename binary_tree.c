#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
FILE *fptr;
/*	fptr=fopen("tree_input.txt","r");
	if(fptr==NULL)
	{
		printf("Cannot open file...exiting.");
		exit(0);
	}*/
typedef struct TREE
{
	int info;
	struct TREE *left;
	struct TREE *right;
}node;
node* CREATE(){
	int x;
	node *temp= (node*)malloc(sizeof(node*));
	//scanf("%d",&x);
	fscanf(fptr,"%d",&x);
	if(x==-1)
	return NULL;
	else
	 temp->info=x;
	printf("Enter the left node for %d :",x);
	temp->left=CREATE();
	printf("Enter the right node for %d :",x);
	temp->right=CREATE();	
}
void preorder(node* root){
	if(root!=NULL){
	printf("%d ",root->info);
	preorder(root->left);
	preorder(root->right);
}

}
void deltree(node *tree)
{
if (tree)
{
deltree(tree->left);
deltree(tree->right);
free(tree);
printf("%d ",tree);
}

}
void main(){
	fptr=fopen("tree_input.txt","r");
	int ch;
	node *root;
	printf("1. Create a tree.\n2. Delete a tree.\n");
	printf("Enter the choice: ");
	scanf("%d",&ch);
	if(ch==1){
		printf("Enter the root node: ");
		root=CREATE();
	}
	preorder(root);
	deltree(root);
	printf(" --------------");
	deltree(root);
	root=NULL;
	preorder(root);
	
	fclose(fptr);
}
