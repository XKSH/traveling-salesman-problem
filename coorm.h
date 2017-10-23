# pragma once
#ifndef coorm_h
#define coorm_h
#include <iostream>
#include "path.h"
using namespace std;

class coorm
{
public: double D[maxn][maxn];
		coorm();
		~coorm(void);
		double dist(double, double, double, double);
		void distm(int, double [maxn][2]);
};
#endif