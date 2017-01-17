#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iterator>

class FileOperations
{
public:
	static void (FileOperations::createEmptyFile)(std::string fileName);
public:
	static void (FileOperations::pressWindowsCommand)(std::string command);
public:
	template<typename T> static void (saveVectorToFile)(std::vector<T> vectorOfObjects, std::string fileName);
public:
	static unsigned int (FileOperations::fileLineCounter)(std::string fileName);
public:
	template<typename  T> static std::vector<T> (readFromFile)(std::string fileName, unsigned short int size, bool divideLines = false);
};

template <typename T>
void FileOperations::saveVectorToFile(std::vector<T> vectorOfObjects, std::string fileName)
{
	std::ofstream output_file(
		fileName,
		std::ios::app
	);
	std::ostream_iterator<std::string> output_iterator(output_file, "");
	std::copy(
		vectorOfObjects.begin(),
		vectorOfObjects.end(),
		output_iterator
	);

	return;
}

template <typename T>
std::vector<T> FileOperations::readFromFile(std::string fileName, unsigned short int size, bool divideLines)
{
	std::vector<std::string> lines;
	lines.reserve(size);

	std::ifstream file(fileName);

	std::string line;
	std::string partial;

	std::vector<std::string> tokens;

	if (!file.is_open())
	{
		std::cerr << "Error opening file : " << fileName << std::endl;
	}
	else if(divideLines == false) {
		while (std::getline(file, line))
		{
			lines.push_back(line);
		}
	}
	else if(divideLines == true)
	{
		std::vector<std::string> tokens;
		while (std::getline(file, line)) 
		{
			std::istringstream iss(line);
			std::string token;

			while (std::getline(iss, token, '\t'))
				tokens.push_back(token);
		}
		lines = tokens;
	}

	return lines;
}
