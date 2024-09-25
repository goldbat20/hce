#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c_in, c_out;
	
	printf("enter a character : ");
	scanf("%c", &c_in);
	
	c_out = c_in + 1;
	
	printf("the next character of %c(%i) is %c(%i)", c_in, c_in, c_out, c_out);
	return 0;
}
