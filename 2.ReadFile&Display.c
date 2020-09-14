#include<stdio.h>
#include<stdlib.h>
int main()
	{
		FILE *fptr;
		char ch;
		fptr=fopen("File2.txt","r");
		if(fptr==NULL)
			{
				perror("File openning error(:");
				getch();
				exit(0);
			}
		//display each char in console
		while((ch=fgetc(fptr))!=EOF)
			printf("%c",ch);
		//Close file 
		fclose(fptr);
	
		return 0;
	}
