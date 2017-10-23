#include "coorm.h"
coorm::coorm(){//initialisation of the matrix of distance
	int i, j;
	for (i = 0; i < maxn; i++)     
	{
		for (j = 0; j < maxn; j++)
		{
			D[i][j] = 0;
		}
	}
}
coorm::~coorm(void)
{
}
double coorm::dist(double x1, double y1, double x2, double y2) //function to calculate the Euclid distance
{
	return sqrt(((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
}
void coorm::distm(int Lines, double C[maxn][2]){//attribute the value when the number of city is known
	int i, j;
	for (i = 0; i < (Lines - 1); i++)     //calculate the distance of the two cities
	{
		for (j = i + 1; j < Lines; j++)
		{
			D[i][j] = D[j][i] = dist(C[i][0], C[i][1], C[j][0], C[j][1]);
		}
	}
}