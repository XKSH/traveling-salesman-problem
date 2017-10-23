# pragma once
#ifndef data_h
#define data_h
#include <iostream>
#include <fstream>
#include <string>
#include"path.h"
#include "direct.h"
using namespace std;
class data
{
public: int cityn;
		double C[maxn][2];
		int LINES;
	    data();
		~data(void);
		void CountLines(char *);
		bool getc(void);
};
#endif