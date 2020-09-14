#include<stdio.h>
#include<stdlib.h>
int main()
	{
		FILE *fptr;
		char str[100];
		fptr=fopen("File1.txt","w");
		if(fptr==NULL)
			{
				perror("File openning error(:");
				getch();
				exit(0);
			}
		//Input contents
		printf("\n Enter contents to store in file1::");
		fgets(str,100,stdin);
		
		//Write to file
		fputs(str,fptr);
		
		//Close file to save file data
		fclose(fptr);
		
		printf("File created and save successfully");
		return 0;
	}
