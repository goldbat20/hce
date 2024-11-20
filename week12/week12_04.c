#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];
	int *ptr;
	int sum = 0;
	
	ptr = grade;
	
	for(i=0;i<5;i++)
	{
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("grade[%i] = %i\n", i, ptr[i]);
		sum +=ptr[i];
	}
	
	printf("average : %i", sum/5);
	return 0;
}
