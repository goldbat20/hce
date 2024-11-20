#include <stdio.h>

/*
int main(void)
{
	FILE*fp;
	char c;
	
	fp = fopen("sample.txt", "r");
	
	if(fp == NULL)
		printf("Failed to open file\n");
		
	while((c = fgetc(fp)) != EOF)
		putchar(c);
		
	fclose(fp);
}
*/

int main(void)
{
	FILE*fp;
	char word[50];
	
	fp = fopen("sample.txt", "r");
	
	if(fp == NULL)
		printf("Failed to open file\n");
		
	while(fgets(word, sizeof(word), fp) != NULL)
		printf("%s", word);
		
	fclose(fp);
}

