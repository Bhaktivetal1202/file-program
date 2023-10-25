/* accept student record and display */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp1;
	char ch;
	fp1=fopen("stud.txt","r");
	if(fp1==NULL)
	{
		printf("\n file not found");
		exit(0);
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		printf("%c",ch);
	}
	fclose(fp1);
}
