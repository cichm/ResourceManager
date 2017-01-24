#pragma once
#include <exception>

class FileSaveException : public std::exception
{
public:
	virtual const char* (FileSaveException::what)(void) const throw();
};

inline const char* (FileSaveException::what)(void) const throw()
{	return "\tFile will not save";	
}
