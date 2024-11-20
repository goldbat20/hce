#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char word1[100], word2[100], word3[100];
	FILE*fp;
	
	printf("input a word : ");
	scanf("%s", word1);
	printf("input a word : ");
	scanf("%s", word2);
	printf("input a word : ");
	scanf("%s", word3);
	
	fp = fopen("sample.txt", "w");
	
	fprintf(fp, "%s\n", word1);
	fprintf(fp, "%s\n", word2);
	fprintf(fp, "%s\n", word3);
	
	fclose(fp);
	return 0;
}
