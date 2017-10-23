#include "data.h"
data::data(){//initialisation of the class data
	cityn = 0;
	int i;
	for (i = 0; i < maxn; i++)     
	{
			C[i][0] = 0;
			C[i][1] = 0;
	}
}
data::~data(void)
{
}
void data::CountLines(char *filename)//count the total number of the city
{
	ifstream ReadFile;    
	int n = 0;
	string temp;
	ReadFile.open(filename, ios::in);//to read a file
	if (ReadFile.fail())//file not existed
	{
		cityn= 0;
	}
	else//count the line of the file
	{
		while (getline(ReadFile, temp))
		{
			n++;
		}
		cityn = n;
	}
	ReadFile.close();
}
bool data::getc(){//read the data from the .txt file
	ifstream file;
	char filename[512];
	cout << "input the name of the .txt file:(format dir:\\folder\\filename.txt)" << endl;
	cin >> filename;
	file.open(filename, ios::in);
	if (file.fail())//catch the problem of file not existed
	{
		cout << "file not exist" << endl;
		file.close();
		cin.get();
		cin.get();
		return false;
	}
	else//attribute the value
	{
		CountLines(filename);
		LINES = cityn;
		int i = 0;
		while (!file.eof()) //detect the end of the file
		{
			file >> C[i][0];
			file >> C[i][1];
			i++;
		}
		file.close(); //close a file		
		return true;
	}
}