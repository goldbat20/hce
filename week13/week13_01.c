#include <stdio.h>
#include <stdlib.h>

struct student {
	int ID;
	char name[10];
	double grade;
};

void main(void){
	struct student s;
	scanf("%i", &s.ID);
	scanf("%s", s.name);
	scanf("%lf", &s.grade);
	
	printf("ID : %d\n", s.ID);
	printf("name : %s\n", s.name);
	printf("grade : %f\n", s.grade);
}
