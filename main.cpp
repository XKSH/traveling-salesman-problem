#include <iostream>
#include <fstream>
#include <string>
#include "path.h"
#include "data.h"
#include "coorm.h"
#include "sa.h"
using namespace std;

int main()
{
	
	coorm d;
	int i;
	data cdata;
	int LINES;
	bool flag_read;//tackle the event of file not existed

	flag_read = cdata.getc();
	if(flag_read)
	{
		LINES = cdata.LINES;//get the value of city number
		d.distm(LINES, cdata.C);
		path a, b;
		a.totaldis(d.D, LINES);
		b = sa::sima(a, d.D, LINES);//start iteration
	
		cout <<"the optimal result:" <<" "<<b.tdis << endl;
		cout<<"the optimal itinerary:";
		for (i = 0; i < LINES; i++){//output the path
			cout << b.city[i] << "-> ";
		}
		cout << b.city[0] << endl;
		system("pause");
		return 1;
	}else
		return 0;
}




