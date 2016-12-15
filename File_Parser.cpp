#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string filename = "stats.txt";
	ifstream inFile;

	inFile.open(filename);

	if(!inFile.is_open())
	{
		return 1;
	}

	
	while(inFile)
	{
		string country;
		getline(inFile, country, ':');
		
		int population;
		inFile >> population;

		//discard new line character from text file
		//or C++11 inFile >> ws (Read whitespace)
		inFile.get();

		cout << country << " " << population << endl;
	}
		
	inFile.close();

	system("PAUSE");

	return 0;
}
