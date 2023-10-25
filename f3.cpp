/* accept one file and copy content another file to change the uppercase character into lowecase 
and vice versa and digit is replace by star symbol */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("bhakti.txt","r");
	fp2=fopen("vetal.txt","w");
	if(fp1==NULL)
	{
		printf("file is not found");
		exit(0);
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		if(isupper(ch))
		fputc(tolower(ch),fp2);
	   else	if(islower(ch))
		fputc(toupper(ch),fp2);
		else if(isdigit(ch))
		fputc('*',fp2);
		else
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	printf("file copy successfullyy..");
}
