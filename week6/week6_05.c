#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	char c;
	printf("Enter the calculation :");
	scanf("%i %c %i", &a, &c, &b);
	
	if (c == '+')
	{
		printf("= %i", a+b);
	}
	else if (c=='-')
	{
		printf("= %i", a-b);
	}
	else if (c=='*')
	{
		printf("= %i", a*b);
	}
	else if (c=='/')
	{
		printf("= %i", a/b);
	}
	return 0;
}
