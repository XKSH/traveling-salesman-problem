#include "sa.h"
path sa::sima(path p, double D[maxn][maxn], int n)   {
	double T;               //temperature        
	path newpath, curpath,bestpath;    //current path , new path and the best path until then 
	bestpath = p;
	int i, P_t = 0, A_t = 0;
	double delta;
	T = INIT_T;     //initialize the temperature     
	curpath =p;
	while (true)  {
		for (i = 1; i <= IN_LOOP; i++)
		{
			newpath = p.getnext(curpath,D,n);    //get the new path             
			delta = newpath.tdis - curpath.tdis;//difference between the new path and the current path
			if (delta < 0.0)//accept the improvement immediately
			{
				curpath = newpath;
				P_t = 0;
				A_t = 0;
			}
			else//accept the new path with a probability
			{
				double rnd = rand() % 10000 / 10000.0;//random number from the uniform distribution
				double p = exp(-delta / T);
				if (p > rnd)
					curpath = newpath;
				P_t++;
			}
			if (P_t >= P_LIMIT)
			{
				A_t++;
				break;
			}
		}
		if (curpath.tdis<bestpath.tdis)
			bestpath = curpath;
		if (A_t >= OUT_LOOP || T < FINAL_T) break;
		for (i = 0; i < n; i++){//output the path
			cout << bestpath.city[i] << "-> ";
		}
		cout << bestpath.city[0] << endl;
		T = T * RATE;    //lower the temperature     
	}
	return bestpath;
}