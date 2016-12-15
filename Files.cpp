#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	ofstream outputFile;
	string outputFileName = "text.txt";
	outputFile.open(outputFileName);

	if(outputFile.is_open()) 
	{
		outputFile << "Hello there" << endl;
		outputFile << 123 << " writing a number" << endl;
		outputFile.close();
	}

	else
	{
		cout << "Could not create output file: " << outputFileName << endl;
	}


	return 0;
}
