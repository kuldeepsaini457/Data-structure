#include<stdio.h>
#include<conio.h>
void TOH(int n, char A, char B, char C);
void main(){
	TOH(4, 'A','B','C');
}
void TOH(int n,char A, char B, char C){
	if(n>=1){
		TOH(n-1,A,C,B);
		printf("%d disc %c -> %c\n",n,A,C);
		TOH(n-1,B,A,C);
	}
}
