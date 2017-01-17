﻿#include "stdafx.h"
#include "FileOperations.h"
#include <fstream>

void 
(FileOperations::createEmptyFile)(std::string fileName)
{
	std::fstream fs(fileName, std::ios::out | std::ios::binary);
	fs.close();

	return;
}

void 
(FileOperations::pressWindowsCommand)(std::string stringCommand)
{
	char *charCommand = new char[stringCommand.length() + 1];
	strcpy_s(charCommand, stringCommand.length() + 1, stringCommand.c_str());

	system(charCommand);

	delete[] charCommand;

	return;
}

unsigned 
(FileOperations::fileLineCounter)(std::string fileName)
{
	int numLines = 0;
	std::ifstream in(fileName);
	std::string unused;
	while (std::getline(in, unused))
		++numLines;

	return numLines;
}
