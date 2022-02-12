#include <iostream>
#include <fstream>
#include <string>


//Prototype functions
void writeLineToFile();
std::string readLineFromFile();

//Main function
int main()
{
	writeLineToFile();
	readLineFromFile();

	return 0;
}

//Read line from file function
std::string readLineFromFile()
{
	std::string lineFromFile;
	std::ifstream myFileObject("SaveProgress.txt");

	while (std::getline(myFileObject, lineFromFile))
	{
		//Let's do something with the data
		std::cout << "\n\nLine from file = " << lineFromFile << std::endl;
	}

	return "";
}

//Write to file function
void writeLineToFile()
{
	//Open a text file, and create one if it doesn't exist.
	std::ofstream myFileObject("SaveProgress.txt");

	//Write data to save the user's progress in the game.
	myFileObject << "\n\nTemp hard coded data - TODO: Replace this.\n";

	//Close file to avoid corruption
	//Notice, not using file name, I am using the file object I created.
	//It is important to close a file quickly after use.
	//Reasons to close quickly: security, save memory (increase performance), 
	//easier to maintain and debug, avoid file corruption, etc.
	//Good habit for multi-user use.
	myFileObject.close();
}