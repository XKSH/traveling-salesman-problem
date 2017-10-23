# pragma once
#ifndef sa_h
#define sa_h
#include <iostream>
#include "path.h"
using namespace std;
const double INIT_T = 2000;      //initial temperature  
const double RATE = 0.95;        //the rate of temperature remained   
const double FINAL_T = 1E-10;    //final temperature    
const int IN_LOOP = 13000;      //loop of the interior    
const int OUT_LOOP = 200;       //loop of the exterior    
const int P_LIMIT = 10000;       //the times of choosing  


 class sa
{
public:
	static path sima(path p, double D[maxn][maxn], int n) ;
};
#endif