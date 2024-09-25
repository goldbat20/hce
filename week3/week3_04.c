#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i1, i2;
	
	printf("enter two integer : ");
	scanf("%f %f", &i1, &i2);
	
	printf("%.6f / %.6f = %.6f", i1, i2, i1/i2);
	
	return 0;
}
