#pragma once
#include <exception>

class FileOpenException : public std::exception
{
public:
	virtual const char* (FileOpenException::what)(void) const throw();
};

inline const char* (FileOpenException::what)(void) const throw()
{	return "\tFile will not open";
}
