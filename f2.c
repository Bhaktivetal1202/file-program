#include<stdio.h>
int main()
{
	FILE *fp1;
	char ch;
	fp1=fopen("bcs.txt","r");
	if(fp1==NULL)
	{
		printf("file is not exist");
		exit(0);
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		printf("%c",ch);
	}
	fclose(fp1);
}
