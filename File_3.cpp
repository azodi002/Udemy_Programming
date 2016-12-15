#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string inFileName = "test.txt";
	ifstream inFile;
	inFile.open(inFileName);

	if(inFile.is_open())
	{
		string line;
		while(!inFile.eof())
		{
			getline(inFile, line);
			cout << line << endl;
		}
		
		inFile.close();
	}

	system("PAUSE");

	return 0;
}
