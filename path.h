# pragma once
#ifndef path_h
#define path_h
#include <iostream>

using namespace std;
const int maxn = 200; //define the max number of cities
class path
{
public: int city[maxn];
		double tdis;
	    path();
		~path(void);
		void getvalue();
		void totaldis(double[maxn][maxn], int);
		path getnext(path p, double D[maxn][maxn], int n);
};
#endif