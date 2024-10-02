#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	printf("Input the year : ");
	scanf("%i", &year);
	
	printf("Is the year %i the leap year? %i", year, (year%4==0 && year%100!=0) || year%400==0);
	return 0;
}
