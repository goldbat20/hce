#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 50;
	int num;
	int trial = 0;
	
	do
	{
		printf("Guess a number : ");
		scanf("%i", &num);
		
		if (num > answer)
			printf("High!\n");
		else
			printf("Low!\n");
		
		trial ++;
	}
	while (num != answer);
	
	printf("Congratulation! Trials : %i", trial);
	return 0;
}
