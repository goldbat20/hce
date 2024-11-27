#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2){
	int area = (pPtr2->x - pPtr1->x)*(pPtr2->y - pPtr1->y);
	if(area < 0)
		return -area;
	else
		return area;
}

int main(int argc, char *argv[]){
	struct point p1, p2;
	int area;
	printf("Input the coordinate p1 (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	struct point *pPtr1 = &p1;
	struct point *pPtr2 = &p2;
	area = getArea(pPtr1, pPtr2);
	printf("Area : %i", area);
}
