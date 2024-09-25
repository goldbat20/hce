#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_int;
	float input_float;
	
	printf("enter an integer : ");
	scanf("%i", &input_int);
	
	printf("enter a float : ");
	scanf("%f", &input_float);
	
	printf("integer : %i, float : %f", input_int, input_float);
	return 0;
}
