#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(int a)
{
	printf("Enter the value : ");
	scanf("%i", &a);
	return a;
}

int factorial(int a)
{
	int res = 1;
	int i;
	for(i=1;i<=a;i++)
		res *= i;
	return res;
}

int combination(int n, int r)
{
	return (factorial(n) / (factorial(n-r) * factorial(r)));
}

int main(void)
{
	int n, r, com;
	n=get_integer(n);
	r=get_integer(r);
	
	com = combination(n, r);
	printf("The result of C(%i, %i) is %i", n, r, com);
}
