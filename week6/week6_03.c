#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=0;
	char c;
	printf("Input a string : ");
	scanf("%c", &c);
	
	while ((c=getchar()) != '\n')
	{
		if (c>=48 && c<=57)
		{
			num ++;
		}
	}
	printf("The number of digits is %i", num);
	return 0;
}
