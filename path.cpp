#include "path.h"

path::path(){//initialisation of the path
	int i;
    for (i = 0; i < maxn; i++){
    city[i] =i;
	}
	tdis=0;
}

path::~path(void)
{
}

void path::totaldis(double D[maxn][maxn], int n)        //calculate the total distance of the path   
{
	int i;
	double cost = 0;
	for (i = 0; i<(n-1); i++)
	{
		cost += D[city[i]][city[i + 1]];
	}
	cost += D[city[0]][city[n-1]];
	tdis = cost;
}
path path::getnext(path p, double D[maxn][maxn], int n)   //get a new path 
{
	int x, y;
	path ret;
	ret = p;
	do {
		x = rand() % n;
		y = rand() % n;
	} while (x ==y);
	swap(ret.city[x], ret.city[y]);     //change the order of two cities
	ret.totaldis(D, n);
	return ret;
}
