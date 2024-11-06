#include <stdio.h>
#define ROWS	3
#define COLS	3

int addMatrix(int a[ROWS][COLS], int b[ROWS][COLS], int c[ROWS][COLS])
{
	int i,j;
	
	for(i=0;i<COLS;i++)
	{
		for(j=0;j<ROWS;j++)
			c[i][j] = a[i][j] + b[i][j];
	}
	return 0;
}

int printMatrix(int a[ROWS][COLS])
{
	int i,j;
	
	for(i=0;i<COLS;i++)
	{
		for(j=0;j<ROWS;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return 0;
}

int main(void)
{
	int A[ROWS][COLS] = {
	{2,3,0},
	{8,9,1},
	{7,0,5}};
	int B[ROWS][COLS] = {
	{1,0,0},
	{0,1,0},
	{0,0,1}};
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
}
