#pragma once
#include <exception>

class FileOpenException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "\tFile will not open";
	}
};
