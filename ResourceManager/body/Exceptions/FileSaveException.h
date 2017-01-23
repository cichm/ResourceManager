#pragma once
#include <exception>

class FileSaveException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "\tFile will not save";
	}
};
