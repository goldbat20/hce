#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};

void main(void){
	struct student s[STUDENTNUM];
	struct student max = {0,0};
	int i, sum;
	float avg;
	for(i=0;i<STUDENTNUM;i++){
		printf("Input the ID : ");
		scanf("%i", &s[i].ID);
		printf("Input the score : ");
		scanf("%i", &s[i].score);
		sum += s[i].score;
		if(s[i].score > max.score){
			max.ID = s[i].ID;
			max.score = s[i].score;
		}
	}
	avg = sum / STUDENTNUM;
	printf("The average of the score : %f\n", avg);
	printf("The highest score - ID : %i, score : %i", max.ID, max.score);
}
